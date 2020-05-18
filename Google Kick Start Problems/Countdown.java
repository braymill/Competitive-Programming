import java.util.*;

// Google Kick Start Round C 2020

public class Countdown {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int T = s.nextInt();
		for (int i = 1; i < T + 1; i++) {
			int len = s.nextInt();
			int k = s.nextInt();
			if (k > len) {
				System.out.println("Case #" + i + ": 0");
			} else {
				int[] arr = new int[len];
				for (int j = 0; j < len; j++) {
					arr[j] = s.nextInt();
				}
				int total = 0;
				int count = 0;
				for (int idx = 0; idx <= len - k;) {
					int curr = 0;
					count = 0;
					while (idx + curr < len - 1 && arr[idx + curr] == arr[idx + curr + 1] + 1) {
						if (curr == 0 && arr[idx + curr] != k) {
							break;
						} else {
							count++;
							curr++;
						}
						
					}
					if (count == k - 1) {
						total++;
					}
					idx += count == 0 ? 1 : count;
					
				}
				System.out.println("Case #" + i + ": " + total);
			}
		}
	}
}
