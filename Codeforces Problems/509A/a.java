import java.util.*;

public class a{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[][] arr = new int[n][n];
        // first row and first column contain all ones
        for (int i = 0; i < n; i++){
            arr[0][i] = 1;
        }
        for (int j = 0; j < n; j++){
            arr[j][0] = 1;
        }
        // each remaining number is sum of top and left of it
        for (int i = 1; i < n; i++){
            for (int j = 1; j < n; j++){
                arr[i][j] = arr[i - 1][j]  + arr[i][j - 1];
            }
        }
        // max is always bottom right corner
        System.out.println(arr[n - 1][n - 1]);
    }
}