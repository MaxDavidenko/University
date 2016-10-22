/**
 * package have a class for test a lab 1 for java.
 */
package computer;

import computer.keeper.ComputerKeeper;


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
        ComputerKeeper<SystemBlock> computerKeeper = new ComputerKeeper<>();
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

      //  computerKeeper.save("data.dat");
        for (SystemBlock obj : computerKeeper) {
            System.out.println(obj.toString());
        }
        // clear container and test a serializable property
        computerKeeper.clear();
        computerKeeper.load("data.dat");
        // test for event in java
        SystemBlock sBlock = (SystemBlock) computerKeeper.toArray()[1];
        sBlock.setPrice(312);
        sBlock.setGpu("AMD R6");
        sBlock.setProcessor("AMD A10");
        sBlock.setProducer("Dell");
        sBlock.setMotherboard("Dell 154DFXa");
        sBlock.setRam("6 GB DDR3 RAM");
        if (!computerKeeper.isSaved())
            computerKeeper.save("data.dat");
    }
}
