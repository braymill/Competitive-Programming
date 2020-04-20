import java.io.*;
import java.util.*;

public class Hands {
	// from 4/10 UTPC, solved

	public static void main(String[] args) {
		/*
		 * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
		 * class should be named Solution.
		 */
		Scanner s = new Scanner(System.in);
		int rounds = s.nextInt();
		char trump = s.next().charAt(0);
		int Awins = 0;
		int Bwins = 0;
		ArrayList<Hand> hands = new ArrayList<>();
		for (int i = 0; i < rounds * 2; i++) {
			String Ahand = s.next();
			char rank = Ahand.charAt(0);
			char suit = Ahand.charAt(1);
			int convert = 0;
			if (rank > 57) {
				if (rank == 'T') {
					convert = 58;
				} else if (rank == 'J') {
					convert = 59;
				} else if (rank == 'Q') {
					convert = 60;
				} else if (rank == 'K') {
					convert = 61;
				} else if (rank == 'A') {
					convert = 62;
				}
			}
			convert = convert != 0 ? convert : (int) rank;
			Hand h = new Hand(suit, convert);
			hands.add(h);
		}
		for (int i = 0; i < hands.size(); i += 2) {
			Hand A = hands.get(i);
			Hand B = hands.get(i + 1);
			if (A.suit == trump && B.suit != trump) {
				Awins++;
			} else if (A.suit != trump && B.suit == trump) {
				Bwins++;
			} else if (A.suit == B.suit) {
				if (A.rank > B.rank) {
					Awins++;
				} else if (A.rank < B.rank) {
					Bwins++;
				} else {
					Awins++;
				}
			} else {
				Bwins++;
			}
		}
		if (Awins == Bwins) {
			System.out.println("TIE " + Awins);
		} else if (Awins < Bwins) {
			System.out.println("BRIAN " + Bwins);
		} else if (Bwins < Awins) {
			System.out.println("ADITYA " + Awins);
		}

	}

	public static class Hand {
		char suit;
		int rank;

		public Hand(char s, int r) {
			suit = s;
			rank = r;
		}
	}

}