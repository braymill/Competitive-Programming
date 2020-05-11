import java.util.*;

//TODO: not complete

public class PythonIndentation {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int MOD = 1000007;
		int num = s.nextInt();
		int[] commands = new int[num];
		char[] letters = new char[num];
		for (int i = 0; i < num; i++) {
			letters[i] = s.next().charAt(0);
		}
		commands[0] = 1;
		boolean startFor = letters[0] == 'f';
		for (int i = 1; i < commands.length; i++) {
			if (letters[i] == 'f' && letters[i-1] == 's' && startFor) {
				commands[i] = (commands[i-1] * 2) % MOD;
			} else {
				commands[i] = commands[i-1];
			}
		}
		System.out.println(commands[num - 1]);
	}
}
