import java.security.SecureRandom;

public class Main {

	public static void main(String[] args) {
		SecureRandom random = new SecureRandom();

		String[] article = { "the", "a", "one", "some", "any" };
		String[] noun = { "boy", "girl", "dog", "town", "car" };
		String[] verb = { "drove", "jumped", "ran", "walked", "skipped" };
		String[] prepositon = { "to", "from", "over", "under", "on" };

		String[] sentences = new String[20];

		// cria 20 frases
		for (int i = 0; i < 20; i++) {
			String art = article[random.nextInt(5)];
			// deixa a primeira letra maiúscula
			art = art.replaceFirst(art.substring(0, 1), art.substring(0, 1).toUpperCase());

			sentences[i] = String.format("%s %s %s %s %s %s.", art, noun[random.nextInt(5)], verb[random.nextInt(5)],
					prepositon[random.nextInt(5)], article[random.nextInt(5)], noun[random.nextInt(5)]);
		}

		// exibe as frases
		for (int i = 0; i < sentences.length; i++)
			System.out.printf("%d° Frase: %s%n", i + 1, sentences[i]);

	}
}