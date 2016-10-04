/**
 * this package have contained a class which describe
 * a container for Objects.
 */
package computer.keeper;

import computer.SystemBlock;

import java.io.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

/**
 * @author max.
 * @version 1.0
 * @param <T> generic object
 */
public class ComputerKeeper<T> implements Collection<T>, Container, Serializable {

    /**
     * @value keeper it is java collection type*/
    private ArrayList<T> keeper;

    /**
     * constructor for class-container.
     * */
    public ComputerKeeper() {
        keeper = new ArrayList<>();
    }
    @Override
    public final int size() {
        return keeper.size();
    }

    /**
     *
     * @param index - index of element which we want to get
     * @return T object from container
     */
    public final T get(final int index) {
        if (index > keeper.size()) {
            throw new IndexOutOfBoundsException();
        }
        return keeper.get(index);
    }
    /**
     *
     * @return an itetator on object
     */
    @Override
    public final Iterator iterator() {
        return this.keeper.iterator();
    }

    @Override
    public final Object[] toArray() {
        return keeper.toArray();
    }

    @Override
    public final <T1> T1[] toArray(final T1[] t1s) {
        return keeper.toArray(t1s);
    }

    @Override
    public final boolean add(final T obj) {
        return keeper.add(obj);
    }

    @Override
    public final boolean remove(final Object obj) {
        return keeper.remove(obj);
    }

    @Override
    public final boolean addAll(final Collection collection) {
        return keeper.addAll(collection);
    }

    @Override
    public final boolean retainAll(final Collection collection) {
       return keeper.retainAll(collection);
    }

    @Override
    public final boolean removeAll(final Collection collection) {
        return keeper.removeAll(collection);
    }

    @Override
    public final boolean containsAll(final Collection collection) {
        return keeper.containsAll(collection);
    }



    @Override
    public final boolean isEmpty() {
        return this.keeper.isEmpty();
    }

    @Override
    public final boolean contains(final Object obj) {
       return this.contains(obj);
    }

    @Override
    public final void clear() {
        this.keeper.clear();
    }

    /**
     * @param path - path to file for save to file operation
     */
    @Override
    public final void save(final String path){
        try (ObjectOutputStream oos = new ObjectOutputStream((new FileOutputStream(("1.dat"))))){
            oos.writeObject(this.keeper);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    /**
     * @param path - path to file for load from file operation
     */
    @Override
    public final void load(final String path) {
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream("1.dat"))) {
            this.keeper = (ArrayList<T>) ois.readObject();
        }
        catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }

    @Override
    public boolean isSaved() {
        return false;
    }
}
