/**
 * This package have contained classes with computer annotation
 *
 * @since 1.0
 * @author max
 * @version 1.0
 */
package computer;

import java.io.Serializable;

/**
 * class for described a computer object.
 */
public class SystemBlock  {

    /** @value described a produser of system block*/
    private String producer;
    /** @value described a computer motherboard **/
    private String motherBoard;
    /** @value described a type of computer processor*/
    private String processor;
    /** @value described a RAM of computer */
    private String ram;
    /** @value described a GPU of computer */
    private String gpu;
    /** @value described a price of computer */
    private double price;

    /** described a constructor  without parameters */
    public SystemBlock() {
        this.producer = "none";
        this.motherBoard = "none";
        this.processor = "none";
        this.ram = "none";
        this.gpu = "none";
        this.price = 0;

    }
    /**
     * @param producer1    a name of computer producer
     * @param gpu1         a name and value of computer gpu
     * @param price1       a aprice of computer
     * @param processor1   a processor architecture,frequency.
     * @param ram1         a ram type and value
     * @param motherBoard1 a mother board name and description
     * */
    public SystemBlock(final String producer1, final String processor1, final String ram1, final String gpu1,
                       final String motherBoard1, final double price1) {
        this.producer = producer1;
        this.processor = processor1;
        this.ram = ram1;
        this.gpu = gpu1;
        this.price = price1;
        this.motherBoard = motherBoard1;

    }
    /**
     * set the computer producer
     * @param producer1 keep info about system block producer
     * */
    public final void setProducer(final String producer1) {
        this.producer = producer1;
    }


    /**
     * get info about system block producer
     * */
    public final String getProducer() {
        return producer;
    }
    /**
     * set the computer producer
     * @param processor1 keep info about computer  processor
     * */
    public final void setProcessor(final String processor1) {
        this.processor = processor1;
    }
    /**
     * get info  about computer processor
     * */
    public final String getProcessor() {
        return processor;
    }
    /**
     * set the computer producer
     * @param ram1 keep info about computer  RAM
     * */
    public final void setRam(final String ram1) {
        this.ram = ram1;
    }
    /**
     * get info about computer ram
     * */
    public final String getRam() {
        return ram;
    }
    /**
     * set a gpu value
     * @param gpu1 keep info about GPU of computer
     * */
    public final void setGpu(final String gpu1) {
        this.gpu = gpu1;
    }

    /**
     * get a gpu info about computer
     */
    public final String getGpu() {
        return gpu;
    }
    /**
     * set a price  of computer
     * @param price1 keep info about computer  processor
     * */
    public final void setPrice(final double price1) {
        this.price = price1;
    }

    /**
     *  get info about computer price
     */
    public final double getPrice() {
        return price;
    }
    /**
     * set a motherboard info of computer
     * @param motherBoard1 keep info about computer motherboard
     * */
    public final void setMotherboard(final String motherBoard1) {
        this.motherBoard = motherBoard1;
    }

    /**
     *
     * get info about computer motherboard
     */
    public final  String getMotherBoard() {
        return motherBoard;
    }

    /**
     *
     * get info about system block in one string
     */
    public final  String toString() {
        StringBuilder builder = new StringBuilder("Producer: " + producer + '\n');
        builder.append("Motherboard: " + motherBoard + '\n');
        builder.append("Processor: " + processor + '\n');
        builder.append("GPU: " + gpu + '\n');
        builder.append("RAM: " + ram + '\n');
        builder.append("Price: " + price + '\n');
        return  builder.toString();
    }



}
