#include <unistd.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <string.h>
#include <semaphore.h>
#include <iostream>
using namespace std;

const int SHARED_MEMORY_SIZE = sizeof(int);
const int BUF_SIZE = 256;
int shm; //shared memory descriptor
int *addr = NULL; // address to shared memory
const char * MEMORY_NAME = "memms";
sem_t *consumer_sem = sem_open("/consumer_sem667", 0);
sem_t *producer_sem = sem_open("/producer_sem667", 0);
sem_t *access_sem = sem_open("/access_sem667", 0);

void init() {
    cout << access_sem << " " << consumer_sem << " " << producer_sem << endl;
    if(!consumer_sem)
        consumer_sem = sem_open("/consumer_sem667", O_CREAT, 0777, 1);
    if(!producer_sem)
        producer_sem = sem_open("/producer_sem667", O_CREAT, 0777, 1);
    if(!access_sem)
        access_sem = sem_open("/access_sem667", O_CREAT, 0777, 1);
    cout << access_sem << " " << consumer_sem << " " << producer_sem << endl;
    if ((shm = shm_open(MEMORY_NAME, O_RDWR, 0777)) == -1) {
        shm = shm_open(MEMORY_NAME, O_CREAT | O_RDWR, 0777);
        ftruncate(shm, SHARED_MEMORY_SIZE);
        *((int*)mmap(0, SHARED_MEMORY_SIZE, PROT_WRITE | PROT_READ, MAP_SHARED, shm, 0)) = 0;
        sem_wait(consumer_sem);
    }
}

void pop() {
    sem_wait(consumer_sem);
    sem_wait(access_sem);
    addr = (int*)mmap(0, SHARED_MEMORY_SIZE, PROT_WRITE | PROT_READ, MAP_SHARED, shm, 0);
    addr[0] = addr[0] - 1;
    cout << addr[0] << endl;
    if(*addr <= 0)
    {
        sem_post(access_sem);
        sem_wait(consumer_sem);
    }
    sem_post(consumer_sem);
    sem_post(access_sem);
    sem_post(producer_sem);
    munmap(addr, SHARED_MEMORY_SIZE);
}

void push() {
    cout << "producers wait" << endl;
    /*while (*/sem_wait(producer_sem); /*!= 0);*/
    cout << "access wait" << endl;
    /*while (*/sem_wait(access_sem); /*!= 0);*/
    addr = (int*)mmap(0, SHARED_MEMORY_SIZE, PROT_WRITE | PROT_READ, MAP_SHARED, shm, 0);
    *addr = *(addr) + 1;
    cout << addr[0] << endl;

    if(*addr > 3)
    {
        sem_post(access_sem);
        sem_wait(producer_sem);
    }
    sem_post(access_sem);
    sem_post(consumer_sem);
    sem_post(producer_sem);
    munmap(addr, SHARED_MEMORY_SIZE);
}
int main(int argc, char *argv[])
{
    init();
    push();
    return 0;
}
