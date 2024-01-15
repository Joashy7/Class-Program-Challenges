package assignment.pkg6;
import java.util.Scanner;

/*
 * @author Joash M
 */
public class Assignment6 {
    class MonthDays {
        private int monthNumber;
        private int yearNumber;
        
        //Mutators or Setters
        public void setMonthNumber(int M){
            this.monthNumber = M;
        };
        public void setYearNumber(int Y){
            this.yearNumber = Y;
        };
        //Accessors or Getters
        public int getMonthNumber(){
            return monthNumber;
        };
        public int getYearNumber(){
            return yearNumber;
        };
        //Constructor isnt actually used in this code
        public MonthDays (int month, int year){
            setMonthNumber(month);
            setYearNumber(year);
        }; 
        //Method Definition: getNumberOfDays
        public static int getNumberOfDays(int M, int Y){
            boolean leapYear = false;
            if ((Y % 100 == 0) && (Y % 400== 0))
                leapYear = true;
            if (!(Y % 100 == 0) && (Y % 4 == 0))
                leapYear = true;
            
            switch (M){
                case 1 -> { 
                    return 31; //Returns 31 for the days in January
                }
                case 2 -> {
                    if (leapYear)
                        return 29; //Returns 29 for the days in February if its a leap year
                    else
                        return 28; //Returns 28 for the days in February if its not a leap year
                }
                case 3 -> {
                    return 31; //Returns 31 for the days in March
                }
                case 4 -> {
                    return 30; //Returns 30 for the days in April
                }
                case 5 -> {
                    return 31; //Returns 31 for the days in May
                }
                case 6 -> {
                    return 30; //Returns 30 for the days in June
                }
                case 7 -> {
                    return 31; //Returns 31 for the days in July
                }
                case 8 -> {
                    return 31; //Returns 31 for the days in August
                }
                case 9 -> {
                    return 30; //Returns 30 for the days in September
                }
                case 10 -> {
                    return 31; //Returns 31 for the days in October
                }
                case 11 -> {
                    return 30; //Returns 30 for the days in November
                }
                case 12 -> {
                    return 31; //Returns 31 for the days in December
                }
                default -> {
                    return 0;
                }
            }
        };

    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int month, year;
        
        //Input
        //While statement to prevent any invalid input
        System.out.println("Enter the month (1 = January, 2 = February,... , 12 = December): ");
        month = input.nextInt();
        while (month < 1 || month > 12){
            System.out.println("Invalid Input, Retry Month Number: ");
            month = input.nextInt();
        }
        System.out.println("Enter the year: ");
        year = input.nextInt();
        
        //Output
        System.out.println("\n" + month + "/" + year + " has " + MonthDays.getNumberOfDays(month, year) + " days.");
    }
    
}
