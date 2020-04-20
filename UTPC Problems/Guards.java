import java.io.*;
import java.util.*;

//solution to UTPC problem 2/28

public class Guards {

	public static class Interval {
		int begin;
		int end;

		public Interval(int b, int e) {
			begin = b;
			end = e;
		}
	}

	public static void main(String[] args) {
		/*
		 * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
		 * class should be named Solution.
		 */
		ArrayList<Interval> one = new ArrayList<>();
		ArrayList<Interval> two = new ArrayList<>();
		int max = Integer.MIN_VALUE;
		Scanner s = new Scanner(System.in);
		int num = s.nextInt();
		for (int i = 0; i < num; i++) {
			int begin = s.nextInt();
			int end = s.nextInt();
			Interval added = new Interval(begin, end);
			if (end > max) {
				max = end;
			}
			one.add(added);
		}
		int num2 = s.nextInt();
		for (int i = 0; i < num2; i++) {
			int begin = s.nextInt();
			int end = s.nextInt();
			Interval added = new Interval(begin, end);
			if (end > max) {
				max = end;
			}
			two.add(added);
		}
		System.out.println(max);
		boolean[] first = new boolean[max + 10];
		boolean[] second = new boolean[max + 10];
		for (Interval i : one) {
			int start = i.begin;
			int finish = i.end;
			for (int j = start; j < finish; j++) {
				first[j] = true;
			}
		}
		for (Interval i : two) {
			int start = i.begin;
			int finish = i.end;
			for (int j = start; j < finish; j++) {
				second[j] = true;
			}
		}
		int numBoth = 0;
		int numOne = 0;
		int numNone = 0;
		for (int i = 0; i < max; i++) {
			if (first[i] && second[i]) {
				numBoth++;
			} else if (first[i] && !second[i] || !first[i] && second[i]) {
				numOne++;
			}
		}
		numNone = max - numBoth - numOne - 1;
		System.out.println(numNone + " " + numOne + " " + numBoth);
	}
}
