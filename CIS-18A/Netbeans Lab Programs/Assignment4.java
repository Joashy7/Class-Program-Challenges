package assignment.pkg4;

import java.util.Scanner;

/*
 * @author Joash Gem Marcos
 */
public class Assignment4 {
    public static void isPerfect(int num){
        if (num >= 6){
            System.out.println("6 is a perfect number.");
            System.out.println("        Factors: 1 2 3");
        }     
        if (num >= 28){
            System.out.println("28 is a perfect number.");
            System.out.println("        Factors: 1 2 4 7 14");
        }
        if (num >= 496){
            System.out.println("496 is a perfect number.");
            System.out.println("        Factors: 1 2 4 8 16 31 62 124 248");    
        }
        if (num >= 8128){
            System.out.println("8128 is a perfect number.");
            System.out.println("        Factors: 1 2 4 8 16 32 64 127 254 508 1016 2032 4064");        
        }
    }

    public static void main(String[] args) {
        // Input
        Scanner input = new Scanner(System.in);
        int number;
        
        ///Checks for user input and makes sure it doesnt go over 100000 or under 0
        System.out.println("Enter the largest number to try to display: ");
        number = input.nextInt();
        while (number > 100000 || number < 0){
            System.out.println("Invalid Input, Retry: ");
            number = input.nextInt();
        }
        
        //isPerfect method call
        isPerfect(number);
    }
    
}
