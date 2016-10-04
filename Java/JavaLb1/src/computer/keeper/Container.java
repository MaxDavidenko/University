/**
 * package have contained interface for container class
 */
package computer.keeper;

import java.io.FileNotFoundException;

/**
 * @author max
 * @version 1.0
 */
public interface  Container<T> {

    /**
     *
     * @param  path - path to file for save to file operation
     */
    public void save(String path);

    /**
     *
     * @param path - path to file for load from file operation
     *
     */
    public  void load(String path);

    public boolean isSaved();
}
