import java.util.*;

public class PerfectSubarray {
	
	// google kick start round c, not done
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int T = s.nextInt();
		for (int i = 1; i < T + 1; i++) {
			int len = s.nextInt();
			int[] arr = new int[len];
			for (int j = 0; j < len; j++) {
				arr[j] = s.nextInt();
			}
			if (len == 1) {
				double num = Math.sqrt((double) arr[0]);
				System.out.println("Case #" + i + ": " + (num == (int) num ? "1" : "0"));
			} else {
				int total = 0;
				for (int ptr1 = 0; ptr1 < len; ptr1++) {
					double sum = arr[ptr1];
					for (int ptr2 = ptr1; ptr2 < len; ptr2++) {
						double num;
						if (ptr2 == ptr1) {
							num = Math.sqrt((double) arr[ptr1]);
						} else {
							sum += arr[ptr2];
							num = Math.sqrt(sum);
						}
						if ((int) num == num) {
							total++;
						}
					}
				}
				System.out.println("Case #" + i + ": " + total);
			}
		}
	}
}
