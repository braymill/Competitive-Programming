import java.util.*;

public class LeastRound {
	// TODO: NEED TO FIGURE OUT HOW TO PRINT OUT PATH

	public static void main(String[] args) {
		// path will have least number of powers of 2 and 5
		Scanner s = new Scanner(System.in);
		int dim = s.nextInt();
		int[][] arr = new int[dim][dim];
		for (int i = 0; i < dim; i++) {
			for (int j = 0; j < dim; j++) {
				arr[i][j] = s.nextInt();
			}
		}
		int[][] pow2 = new int[dim][dim];
		int[][] pow5 = new int[dim][dim];
		// get num powers of 2 for each number in arr
		for (int i = 0; i < dim; i++) {
			for (int j = 0; j < dim; j++) {
				int current = arr[i][j];
				int num = 0;
				while (current % 2 == 0) {
					num++;
					current /= 2;
				}
				pow2[i][j] = num;
			}
		}
		// get num powers of 5 for each number in arr
		for (int i = 0; i < dim; i++) {
			for (int j = 0; j < dim; j++) {
				int current = arr[i][j];
				int num = 0;
				while (current % 5 == 0) {
					num++;
					current /= 5;
				}
				pow5[i][j] = num;
			}
		}
		int[][] bestPow2 = new int[dim][dim];
		int[][] bestPow5 = new int[dim][dim];
		for (int[] array : bestPow2) {
			Arrays.fill(array, Integer.MAX_VALUE);
		}
		for (int[] array : bestPow5) {
			Arrays.fill(array, Integer.MAX_VALUE);
		}
		for (int i = 0; i < dim; i++) {
			for (int j = 0; j < dim; j++) {
				if (i == 0 && j == 0) {
					bestPow2[0][0] = pow2[0][0];
					bestPow5[0][0] = pow5[0][0];
				} else {
					// go right for pow 2
					if (j - 1 >= 0 && bestPow2[i][j - 1] + pow2[i][j] < bestPow2[i][j]) {
						bestPow2[i][j] = bestPow2[i][j - 1] + pow2[i][j];
					}
					// go down for pow 2
					if (i - 1 >= 0 && (bestPow2[i - 1][j] + pow2[i][j] < bestPow2[i][j])) {
						bestPow2[i][j] = bestPow2[i - 1][j] + pow2[i][j];
					}
					// go right for pow 2
					if (j - 1 >= 0 && bestPow5[i][j - 1] + pow5[i][j] < bestPow5[i][j]) {
						bestPow5[i][j] = bestPow5[i][j - 1] + pow5[i][j];
					}
					// go down for pow 2
					if (i - 1 >= 0 && (bestPow5[i - 1][j] + pow5[i][j] < bestPow5[i][j])) {
						bestPow5[i][j] = bestPow5[i - 1][j] + pow5[i][j];
					}
				}
			}
		}
		// path with least num zeroes is the min between the paths on pow 2 and pow 5
//		System.out.println(Arrays.deepToString(bestPow5));
//		System.out.println(Arrays.deepToString(bestPow2));
		int numZeroes = Math.min(bestPow2[dim - 1][dim - 1], bestPow5[dim - 1][dim - 1]);
		System.out.println(numZeroes);
		// print out the letters for the path
		boolean choosePow2 = numZeroes == bestPow2[dim - 1][dim - 1];
		int[][] pathArr = choosePow2 ? bestPow2 : bestPow5;
		int[][] finalArr = new int[dim][];
		ArrayList<Integer> lens = new ArrayList<>();
		for (int i = 0; i < dim; i++) {
			int counter = 0;
			for (int j = 0; j < dim; j++) {
				if (pathArr[i][j] <= numZeroes) {
					counter++;
				}
			}
			lens.add(counter);
		}
		for (int i = 0; i < finalArr.length; i++) {
			finalArr[i] = new int[lens.get(i)];
		}
//		int currRow = dim - 1;
//		int currCol = dim - 1;
		StringBuilder sb = new StringBuilder();
//		while (currRow != 0 || currCol != 0) {
//			int down = Integer.MAX_VALUE;
//			int right = Integer.MAX_VALUE;
//			if (currRow - 1 >= 0) {
//				down = pathArr[currRow - 1][currCol];
//			}
//			if (currCol - 1 >= 0) {
//				right = pathArr[currRow][currCol - 1];
//			}
//			if (down == numZeroes && down <= right) {
//				currRow--;
//				sb.append("D");
//			} else {
//				currCol--;
//				sb.append("R");
//			}
//		}
	}

}
