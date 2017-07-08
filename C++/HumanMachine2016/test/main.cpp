#include <iostream>


double gcd(int a, int b);


int main()
{
    std::cout << gcd(10,3);
    return 0;
}

double gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
