/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;
/**
 *
 * @author jemje
 */
public class Main {
  /**
   * @param args the command line arguments
   */
  public static void main(String[] args) {
    //Input
    Scanner input = new Scanner(System.in);
    int days;
    double salary = 0.01, daySalary, total = 0; //doubles for all the calculations and total values
    
    //Ask user for how many days will the salary double
    System.out.print("How many days will the salary double? ");
    days = input.nextInt();
    
    //while loop condition to check if user entered valid number
    while((days < 0) || (days > 45)){
        System.out.println("Invalid Number of Days, Try Again.");
        days = input.nextInt();
    }
    
    //Calculations and Output
    System.out.println("\n" + "Day             Total Pay");
    System.out.println("---------------------------------");
    
    //for loop used here to repeat the print of each line
    for (int index = 1; index <= days; index++){
        daySalary = Math.pow((2),(index - 1)) * salary; //equation for calculating a certain day's salary
        System.out.printf(String.format("%-16d", index) + "$" + String.format("%15.2f%n",daySalary));
        total += daySalary;
    }
    System.out.println("---------------------------------");
    System.out.printf(String.format("%-16s","Total") + "$" + String.format("%15.2f%n",total));
  }
    
}
