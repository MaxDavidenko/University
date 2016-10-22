/**
 * package have contained interface for container class
 */
package computer.keeper;
import java.beans.PropertyChangeListener;

/**
 * @author max
 * @version 1.0
 */
public interface  Container extends PropertyChangeListener {

    /**
     * method for serialize object
     * @param path - path to file for save to file operation
     */
    public void save(String path);
    /**
     *  method for load serializable object
     * @param path - path to file for load from file operation
     */
    public  void load(String path);

    /**
     * @param path - path to saved file
     * @return - return  boolean value for file size expression
     */
    public boolean isSaved();

    }
