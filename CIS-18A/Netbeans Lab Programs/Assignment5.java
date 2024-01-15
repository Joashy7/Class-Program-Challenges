package assignment.pkg5;
import java.util.Scanner;

/*
 * @author Joash M
 */
public class Assignment5 {

    public static double populationStandardDeviation(double array[], int amount, double mean){
        double totalDeviations = 0; //Double used in calculating the standard deviation
        //for loop that is used to subtract the mean from each value and square it, then add it to a total
        for (int index = 0; index < amount; index++){ 
            totalDeviations += Math.pow((array[index] - mean),2);
        }
        return Math.pow((totalDeviations / amount),0.5);
    }
    public static double sampleStandardDeviation(double array[], int amount, double mean){
        double totalDeviations = 0; //Double used in calculating the standard deviation
        //for loop that is used to subtract the mean from each value and square it, then add it to a total
        for (int index = 0; index < amount; index++){ 
            totalDeviations += Math.pow((array[index] - mean),2);
        }
        return Math.pow((totalDeviations / (amount - 1)),0.5); // -1 applied to the amount here to differentiate between population standard deviation
    }
    
    public static void main(String[] args) {
        // Input
        Scanner input = new Scanner(System.in);
        int number;
        double smallest = 10000, largest = 0, total = 0, average = 0; //Doubles initialized to be able to be used in the minimum, maximum, and average calculation
        
         ///Checks for user input for invalid input
        System.out.println("How many number of the type double do you want to store in your array? ");
        number = input.nextInt();
        while (number < 1){
            System.out.println("Invalid Input, Retry: ");
            number = input.nextInt();
        }
        
        //Promts user to enter values into the array
        double[] data = new double[number]; //Declaration of an array
        for (int index = 0; index < number; index++){
            System.out.println("Enter a Value #" + (index + 1) + ": "); //+1 added to account for the 0
            data[index] = input.nextDouble();
        }
            
        //Calculations for minimum and maximum and average
        for (int index = 0; index < number; index++){
            if (data[index] > largest)
                largest = data[index];
            if (data[index] < smallest)
                smallest = data[index];
            total += data[index];
            average = total / number;
        }        
            
        //Output
        System.out.println("\nThe statistics of your user entered array is: ");
        System.out.println("----------------------------------------------\n");
        System.out.printf(String.format("%31s","Minimum:") + String.format("%11.3f%n",smallest) + "\n");
        System.out.printf(String.format("%31s","Maximum:") + String.format("%11.3f%n",largest) + "\n");
        System.out.printf(String.format("%31s","Average:") + String.format("%11.3f%n",average) + "\n");
        System.out.printf(String.format("%31s","Standard Deviation(Population):") + String.format("%11.3f%n",(populationStandardDeviation(data, number, average))) + "\n"); //Method calls for population standard deviation
        System.out.printf(String.format("%31s","Standard Deviation(Sample):") + String.format("%11.3f%n",(sampleStandardDeviation(data, number, average))) + "\n"); //Method calls for sample standard deviation
    }
}
