// Exercise 18.3
import java.util.Scanner;

public class Main{
  
  static int gcd(int x, int y) {
    // Recursion Base Case
    if (x % y == 0)
      return y;
    return gcd(y, x % y);
  }
  
  public static void main(String[] args) {
    // User Inputs
    Scanner in = new Scanner(System.in);
    System.out.println("Enter the first number: ");
    int x = in.nextInt();
    System.out.println("Enter the second number: ");
    int y = in.nextInt();

    // Recursion Calls
    System.out.println("The GCD of " + x + " and " + y + " is " + gcd(x, y));
  }
}