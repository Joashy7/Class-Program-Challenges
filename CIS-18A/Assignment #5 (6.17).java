import java.security.SecureRandom;

public class Main {
	private static final SecureRandom random = new SecureRandom();
  private static final int maxRolls = 36_000_000;
	public static void main(String[] args) {
		int[] frequency = new int[13];

		for (int i = 0; i < maxRolls; i++) {
			int die1 = random.nextInt(6) + 1;
			int die2 = random.nextInt(6) + 1;
			frequency[die1 + die2]++;
		}

		System.out.printf("%s %s%n", "Sum", "Frequency");

		for (int i = 2; i < frequency.length; i++) {
			System.out.printf("%2d %10d%n", i, frequency[i]);
		}
	}

}