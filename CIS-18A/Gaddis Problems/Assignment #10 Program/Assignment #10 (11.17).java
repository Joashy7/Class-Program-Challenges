import java.io.IOException;

public class Main {
	public static void main(String[] args) {
		try {throw new ExceptionA("Exception A");} 
    catch (Exception e) {e.printStackTrace();}

		try {throw new ExceptionB("Exception B");} 
    catch (Exception e) {e.printStackTrace();}

		try {throw new NullPointerException();} 
    catch (Exception e) {e.printStackTrace();}

		try {throw new IOException();} 
    catch (Exception e) {e.printStackTrace();}
  }
}