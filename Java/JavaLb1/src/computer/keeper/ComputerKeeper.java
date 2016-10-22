/**
 * this package have contained a class which describe
 * a container for Objects.
 */
package computer.keeper;

import computer.SystemBlock;

import java.beans.PropertyChangeEvent;
import java.io.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

/**
 * @author max.
 * @version 1.0
 * @param <T> generic object
 */
public class ComputerKeeper<T>
        implements Collection<T>, Container, Serializable {

    /**
     * @value keeper it is java collection type*/
    private ArrayList<T> keeper;
    /**
     * @value isSaved  return false if any object has been changed
     */
    private boolean isSaved;
    /**
     * constructor for class-container.
     * */
    public ComputerKeeper() {
        keeper = new ArrayList<>();
        isSaved = true;
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
        if (obj != null) {
            if (obj instanceof SystemBlock)
                ((SystemBlock) obj).addListener(this);
            return keeper.add(obj);
        }
        return false;
    }

    @Override
    public final boolean remove(final Object obj) {
        if (obj != null) {
            ((SystemBlock) obj).removeListener(this);
            return keeper.remove(obj);
        }
        return false;
    }

    @Override
    public final boolean addAll(final Collection collection) {
        for (Object obj : collection){
            ((SystemBlock) obj).addListener(this);
        }
        return keeper.addAll(collection);
    }

    @Override
    public final boolean retainAll(final Collection collection) {
       return keeper.retainAll(collection);
    }

    @Override
    public final boolean removeAll(final Collection collection) {
            for (Object obj : collection){
                ((SystemBlock) obj).removeListener(this);
            }
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
        for (Object obj : this.keeper.toArray()) {
            ((SystemBlock) obj).removeListener(this);
        }
        this.keeper.clear();
    }

    /**
     * method for serialize object
     * @param path - path to file for save to file operation
     */
    @Override
    public final void save(final String path) {
        try (ObjectOutputStream oos = new ObjectOutputStream((new FileOutputStream((path))))){
            oos.writeObject(this.keeper);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            System.out.println(e.getMessage());
           // e.printStackTrace();
        }
        isSaved = true;
    }

    /**
     *  method for load serializable object
     * @param path - path to file for load from file operation
     */
    @Override
    public final void load(final String path) {
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(path))) {
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

    /**
     * @return - return  boolean value for file size expression
     */
    @Override
    public final boolean isSaved() {
        return isSaved;
    }

    /**
     * method for call about the object changed state
     * @param event - traced object
     */
    @Override
    public final void propertyChange(final PropertyChangeEvent event) {
            isSaved = false;
            System.out.println("Property " + event.getPropertyName() + " change value from "
                    + event.getOldValue() + " on " + event.getNewValue() + "\n");
    }
}
