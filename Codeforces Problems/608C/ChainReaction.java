import java.util.*;

public class ChainReaction {
	
	// not possible for range to be 0, so if this is true, we know space is empty
	public static final int EMPTY = 0;

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int num = s.nextInt();
		ArrayList<Beacon> b = new ArrayList<>();
		for (int i = 0; i < num; i++) {
			b.add(new Beacon(s.nextInt(), s.nextInt()));
		}
		Collections.sort(b);
		int maxSpace = b.get(b.size() - 1).pos;
		int[] arr = new int[maxSpace + 1];
		int bCount = 0;
		int listC = 0;
		// initializing power arr
		while (bCount < arr.length) {
			if (bCount == b.get(listC).pos) {
				arr[bCount] = b.get(listC).power;
				listC++;
			} else {
				arr[bCount] = 0;
			}
			bCount++;
		}
		int[] dp = new int[maxSpace + 1];
		// base case
		dp[0] = arr[0] != EMPTY ? 1 : EMPTY;
		for (int i = 1; i < dp.length; i++) {
			int currentPow = arr[i];
			int potential = i - 1 - currentPow;
			if (currentPow == EMPTY) {
				// no effect because this is empty
				dp[i] = dp[i - 1];
			} else {
				if (potential < 0) {
					// would at least explode the one farthest left and all the other ones before it
					dp[i]++;
				} else {
					// starts chain reaction
					dp[i] = dp[potential] + 1;
				}
			}
		}
		// need to find max
		int total = Integer.MIN_VALUE;
		for (int i = 0; i < dp.length; i++) {
			if (dp[i] > total) {
				total = dp[i];
			}
		}
		System.out.println(num - total);
		s.close();
	}

	public static class Beacon implements Comparable<Beacon> {
		int pos;
		int power;

		public Beacon(int ps, int pw) {
			pos = ps;
			power = pw;
		}

		public int compareTo(Beacon other) {
			return pos - other.pos;
		}
	}
}
