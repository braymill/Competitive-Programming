import java.util.*;

public class Drink {
	// binary search problem, solved
	// https://codeforces.com/problemset/problem/706/B
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int num = s.nextInt();
		ArrayList<Integer> shops = new ArrayList<>(num);
		for (int i = 0; i < num; i++) {
			shops.add(s.nextInt());
		}
		Collections.sort(shops);
		int days = s.nextInt();
		int[] coins = new int[days];
		for (int i = 0; i < days; i++) {
			coins[i] = s.nextInt();
		}
		for (int i = 0; i < coins.length; i++) {
			// case where coins can't afford anything
			if (coins[i] < shops.get(0)) {
				System.out.println(0);
			} else if (coins[i] > shops.get(shops.size() - 1)) {
				System.out.println(shops.size());
			} else if (coins[i] == shops.get(0) && coins[i] == shops.get(shops.size() - 1)) {
				System.out.println(shops.size());
			} else {
				int result = binarySearch(shops, coins[i]);
//        		int j = result;
//        		while (j < shops.size() && shops.get(j) <= coins[i]) {
//        			j++;
//        		}
				System.out.println(result >= shops.size() ? shops.size() : result);
			}
		}
		s.close();
	}

	// returns where the number of coins would be in costs list
	public static int binarySearch(ArrayList<Integer> data, int target) {
		int low = 0;
		int high = data.size() - 1;
		while (low <= high) {
			int mid = low + ((high - low) / 2);
			if (data.get(mid) == target) {
				low = mid + 1;
			} else if (data.get(mid) < target)
				// current element is less than target, need to go to upper half
				low = mid + 1;
			else
				// current element is more than target, need to go to lower half
				high = mid - 1;
		}
		// never found target but low is where it should be
		return low;
	}

}