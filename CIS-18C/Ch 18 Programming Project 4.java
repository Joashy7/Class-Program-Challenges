// Exercise 18.17
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // User input to string
    Scanner in = new Scanner(System.in);
    System.out.print("Enter a string: ");
    String line = in.nextLine();

    // Converts String to Char Array
    char[] chars = line.toCharArray();

    // User input of character to find (uses first character entered)
    System.out.println("Enter a character: ");
    char ch = in.next().charAt(0);

    // Method call
    System.out.println(ch + " occurs " + count(chars, ch) + " times.");
    in.close();
  }

  public static int count(char[] chars, char ch) {
    return count(chars, ch, chars.length - 1);
  }

  public static int count(char[] chars, char ch, int i) {
    // Recursion Base Case
    if (i == 0)
      return 0;

    // If case for when character in string equals character search
    if (chars[i] == ch)
      return 1 + count(chars, ch, i - 1);
    else
      return count(chars, ch, i - 1);
  }
}

