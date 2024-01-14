/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;
/**
 *
 * @author Joash Gem Marcos
 */
public class Main {

  /**
   * @param args the command line arguments
   */
  public static void main(String[] args) {
    //Input
    Scanner input = new Scanner(System.in);
    
    int numberOne, numberTwo, numberThree, numberFour;
    int maximumValue = 0, minimumValue = 0;
    
    //Ask user for all the 4 values and assign them to their coinciding variables
    System.out.print("Enter the first value: ");
    numberOne = input.nextInt();
    System.out.print("Enter the second value: ");
    numberTwo = input.nextInt();
    System.out.print("Enter the third value: ");
    numberThree = input.nextInt();
    System.out.print("Enter the fourth value: ");
    numberFour = input.nextInt();
    
    //Calculations for maximum and minimum number
    //I know there is a more efficient way like using an array or Math.max and Math.min, but they aren't in Chapter 3 or 4
    if ((numberOne > numberTwo) && (numberOne > numberThree) && (numberOne > numberFour)){
        maximumValue = numberOne;
    }
    if (!((numberOne > numberTwo) || (numberOne > numberThree) || (numberOne > numberFour))){
        minimumValue = numberOne;
    }
    if ((numberTwo > numberOne) && (numberTwo > numberThree) && (numberTwo > numberFour)){
        maximumValue = numberTwo;
    }
    if (!((numberTwo > numberOne) || (numberTwo > numberThree) || (numberTwo > numberFour))){
        minimumValue = numberTwo;
    }
    if ((numberThree > numberTwo) && (numberThree > numberOne) && (numberThree > numberFour)){
        maximumValue = numberThree;
    }
    if (!((numberThree > numberTwo) || (numberThree > numberOne) || (numberThree > numberFour))){
        minimumValue = numberThree;
    }
    if ((numberFour > numberTwo) && (numberFour > numberThree) && (numberFour > numberOne)){
        maximumValue = numberFour;
    }
    if (!((numberFour > numberTwo) || (numberFour > numberThree) || (numberFour > numberOne))){
        minimumValue = numberFour;
    }
    
    //Output
    System.out.printf("The values entered: " + numberOne + " " + numberTwo + " " + numberThree + " " + numberFour);
    System.out.printf(" have a minimum value " + minimumValue + " and maximum value " + maximumValue);
  }
    
}
