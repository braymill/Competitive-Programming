import java.util.*;

public class Rooks {

	//5/2/2020 UTPC
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		char[][] board = new char[8][8];
		boolean[] rows = new boolean[8];
		boolean[] cols = new boolean[8];
		Arrays.fill(rows, true);
		Arrays.fill(cols, true);
		for (int i = 0; i < 8; i++) {
			String line = s.nextLine();
			for (int j = 0; j < 8; j++) {
				char cur = line.charAt(j);
				if (cur == 'R') {
					rows[i] = false;
					cols[j] = false;
				}
			}
		}
		for (int i = 0; i < 8; i++) {
			if (!rows[i]) {
				for (int j = 0; j < 8; j++) {
					board[i][j] = 'x';
				}
			}
		}
		for (int j = 0; j < 8; j++) {
			if (!cols[j]) {
				for (int i = 0; i < 8; i++) {
					board[i][j] = 'x';
				}
			}
		}
		int num = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (board[i][j] != 'x') {
					num++;
				}
			}
		}
		System.out.println(num);
	}
}
