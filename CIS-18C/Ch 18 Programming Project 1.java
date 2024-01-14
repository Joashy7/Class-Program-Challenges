// Exercise 18.1
import java.math.BigInteger;
import java.util.Scanner;

public class Main{
  
  static BigInteger fctorNum(long num) {
    // BigInteger Class is used to turn huge numbers to strings
    long i = 1;
    // BigInteger.ONE is turning the object result to "1"
    BigInteger result = BigInteger.ONE;
    return factor(num, i, result);
  }

  static BigInteger factor(long num, long i, BigInteger result) {
    //Recursion Base Case
    if (i <= num) {
      //result.multiply multiplies two BigInteger Objects
      result = result.multiply(new BigInteger(String.valueOf(i)));
      return factor(num, i++, result);
    }
    return result;
  }

  public static void main(String[] args) {
    // User Input
    Scanner in = new Scanner(System.in);
    System.out.print("Enter an integer of any size: ");
    long num = in.nextLong();
    // Recursion Call
    System.out.println("Factorial of " + num + " is " + fctorNum(num));
    }
}