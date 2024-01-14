public class Main {
  public static void main(String[] args) {
    DeckOfCards myDeckOfCards = new DeckOfCards();
    myDeckOfCards.shuffle(); // place Cards in random order
    
    // print all 52 Cards in the order in which they are dealt
    for (int i = 1; i <= 5; i++) {
      // deal and display a Card
      System.out.printf("%-19s", myDeckOfCards.dealCard());
    }  
    System.out.println();
    if (myDeckOfCards.fullHouse(myDeckOfCards)){System.out.printf("Hand Contains a full house.%n");}
    else if (myDeckOfCards.straight(myDeckOfCards)){System.out.printf("Hand Contains a straight.%n");}
    else if (myDeckOfCards.flush(myDeckOfCards)){System.out.printf("Hand Contains a flush.%n");}
    else if (myDeckOfCards.fourOfKind(myDeckOfCards)){System.out.printf("Hand Contains four of a kind.%n");}
    else if (myDeckOfCards.threeOfKind(myDeckOfCards)){System.out.printf("Hand Contains three of a kind.%n");}
    else if (myDeckOfCards.doublePair(myDeckOfCards)){System.out.printf("Hand Contains a 2 Pairs.%n");}
    else if (myDeckOfCards.pairOfTwo(myDeckOfCards)){System.out.printf("Hand Contains a Pair.%n");}
  }
}