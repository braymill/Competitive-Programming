import java.util.*;

public class AlarmClock {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int T = s.nextInt();
		for (int i = 0; i < T; i++) {
			long a = s.nextLong();
			long b = s.nextLong();
			long c = s.nextLong();
			long d = s.nextLong();
			if (b >= a) {
				System.out.println(b);
			} else if (d >= c) {
				System.out.println(-1);
			} else {
				double inc = (double) c - d;
				double diff = (double) a - b;
				int numtimesalarm = (int) Math.ceil(diff / inc);
				long ans = b + numtimesalarm * c;
				System.out.println(ans);
			}
		}
		s.close();
	}
}
