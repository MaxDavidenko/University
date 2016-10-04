/**
 * package have a class for test a lab 1 for java.
 */
package computer;

import computer.keeper.ComputerKeeper;
import java.util.Collection;


/**
 * @author max
 * @version  1.0
 */
public final class Main {
    /**
     * make constructor private for check style
     */
    private  Main() {}
    /**
     *
     * @param args command arguments from user
     */
    public  static void main(final String...args) {
        Collection<SystemBlock> computerKeeper = new ComputerKeeper<>();
        //ComputerKeeper<SystemBlock> computerKeeper = new ComputerKeeper<>();
        computerKeeper.add(new SystemBlock("Dell", "MSIZ170i",
                            "Intel quad Core i3, 2.1 Ggz",
                            "4 GB DDR3 RAM", "Intel HD graphics 768 MB", 382.5));
        computerKeeper.add(new SystemBlock("Asus", "A68HM",
                            "AMD A6 quad core, 3.1 Ggz",
                            "4 GB DDR3 RAM", "AMD HD 6653M 1 GB", 350.4));
        computerKeeper.add(new SystemBlock("MSI", "MSIZ156i",
                            "Intel Core i5, 3.1 Ggz",
                            "6 GB DDR3 RAM", "Nvidia geforce 920m 2 GB", 450.5));
        computerKeeper.add(new SystemBlock("Apple", "A1418 (MK452UA/A",
                            "Intel Core i5, 3.1 Ggz",
                            "4 GB DDR3 RAM", "Intel Iris Pro 1 GB", 2000));

        for (SystemBlock obj : computerKeeper) {
            System.out.println(obj.toString());
        }
    }
}
