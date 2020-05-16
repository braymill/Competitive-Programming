import java.util.*;

public class BeautifulMatrix{
    public static void main(String[] args){
        int[][] mat = new int[5][5];
        Scanner s = new Scanner(System.in);
        int[] pairOfOne = new int[2];
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                int curr = s.nextInt();
                if (curr == 1){
                    pairOfOne[0] = i;
                    pairOfOne[1] = j;
                }
                mat[i][j] = curr;
            }
        }
        int[] center = new int[]{2, 2};
        double distance = Math.sqrt((Math.pow((center[0] - pairOfOne[0]), 2) + Math.pow((center[1] - pairOfOne[1]), 2)));
        if (pairOfOne[0] == 0 && pairOfOne[1] == 0 || pairOfOne[0] == 4 && pairOfOne[1] == 0 || pairOfOne[0] == 0 && pairOfOne[1] == 4 || pairOfOne[0] == 4 && pairOfOne[1] == 4){
            System.out.print(4);
        } else {
            System.out.print((int) Math.ceil(distance));
        }
    }
}