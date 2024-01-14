// Exercise 18.11
import java.util.Scanner;

public class Main{
  // Global variable to keep track of sum each recursion
  static int sum = 0;
  static int sumDigits(long n) {
    // Recursion base case
    if (n == 0) 
      return sum;
  
    long i = n % 10;
    sum += i;
    n /= 10;
    return sumDigits(n);
  }
  
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    // User input
    System.out.println("Enter an integer: ");
    long num = in.nextInt();

    // Function call
    System.out.println("The sum of the digits in " + num + " is " + sumDigits(num));
  }
}