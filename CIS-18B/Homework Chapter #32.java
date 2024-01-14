import java.util.concurrent;
import java.util.concurrent;

public class Main {
  private static Integer sum = 0;
  private static int NUMTHRD = 1000;
  public static void main(String[] args) {
    ExecutorService executor = Executors.newCachedThreadPool();
    
    for (int index = 0; index < NUMTHRD; index++) 
      executor.execute(new AddOne());
    
    executor.shutdown();
    while (!executor.isTerminated()) {}
    
    System.out.println("Sum of threads = " + sum);
  }
  
  private static class AddOne implements Runnable {
    public void run(){sum++;}
  }
}