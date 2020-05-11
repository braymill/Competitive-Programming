import java.util.*;

public class LearnFromMath {
	
	// http://codeforces.com/problemset/problem/472/A
	// solved
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		boolean[] isPrime = new boolean[10000001];
		Arrays.fill(isPrime, true);
		for (int p = 2; p * p <= 10000000; p++) {
			if (isPrime[p]) {
				for (int start = p * 2; start <= 10000000; start += p) {
					isPrime[start] = false;
				}
			}
		}
		int num = s.nextInt();
		int option1 = num - 4;
		int option2 = num - 6;
		int option3 = num - 8;
		if (!isPrime[option1]) {
			System.out.println(option1 + " 4");
		} else if (!isPrime[option2]) {
			System.out.println(option2 + " 6");
		} else if (!isPrime[option3]) {
			System.out.println(option3 + " 8");
		} else {
			System.out.println(num / 2 + " " + num / 2);
		}
	}
}