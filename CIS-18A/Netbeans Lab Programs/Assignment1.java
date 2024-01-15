2020/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package assignment.pkg1;

import java.util.Scanner;
import javax.swing.JOptionPane;
/**
 *
 * @author Joash Gem Marcos
 */
public class Assignment1 {
    static double STATE_SALES_TAX = 5.75;
    static double COUNTY_SALES_TAX = 2.85;
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) { 
        //Input
        Scanner input = new Scanner(System.in);
        
        //Variables 

        int year;
        double totalEarnings, countyTax, stateTax, totalTax, totalSales; //floats for all the tax calculations
        
        //Declare string and ask user for input
        String month = JOptionPane.showInputDialog("What is the name of the month?");
        
        //Ask user input for year
        System.out.print("What year is it?: ");
        year = input.nextInt();
        
        //Ask user input for total earnings
        System.out.print("What is the year's total earnings?: ");
        totalEarnings = input.nextFloat();

        //Calculations
        totalSales = totalEarnings /((100 + STATE_SALES_TAX + COUNTY_SALES_TAX)/100);
        stateTax = totalSales * (STATE_SALES_TAX/100);
        countyTax = totalSales * (COUNTY_SALES_TAX/100);
        totalTax = stateTax + countyTax;
        
        //Output
        System.out.println("Month: " + month + " " + year);
        System.out.println("-------------------------------");
        System.out.printf("Total Collected: $ " + String.format("%.2f", totalEarnings) + "\n");
        System.out.printf("Sales: $ " + String.format("%.2f", totalSales) + "\n");
        System.out.printf("County Sales Tax: $ " + String.format("%.2f", countyTax) +"\n");
        System.out.printf("State Sales Tax: $ " + String.format("%.2f", stateTax) +"\n");
        System.out.printf("Total Sales Tax: $ " +  String.format("%.2f", totalTax) + "\n");
    }
}
