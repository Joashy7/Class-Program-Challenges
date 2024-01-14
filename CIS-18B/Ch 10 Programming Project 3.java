// Exercise 10.17
import java.math.BigInteger;

public class Main {
  public static void main(String[] args) {
    // Sets the max values we want to find
    BigInteger maxVal = BigInteger.valueOf(Long.MAX_VALUE); 

    // For the amount of numbers we want to see   
    int count = 0;

    // Finds the root of the biggest value of long
    long result = (long) Math.sqrt(maxVal.doubleValue());
    BigInteger root = BigInteger.valueOf(result);
    System.out.println("The ten numbers are: ");
    
    while (count < 10) {
      // Adds a value of one to the root number then squares it
      root = root.add(BigInteger.ONE);
      BigInteger n2 = root.pow(2);
      // Prints out the 10 numbers with squared values bigger than maxVal
      System.out.println(n2);
      count++;
    }  
  }
}