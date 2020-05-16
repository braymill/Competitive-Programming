import java.util.*;

public class Checkpoint{
	
	//Google Kick Start Round B 2020 Question 1
	
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int cases = s.nextInt();
        for (int j = 0; j < cases; j++){
            int num = s.nextInt();
            int[] current = new int[num];
            for (int i = 0; i < num; i++){
                current[i] = s.nextInt();
            }
            int count = 0;
            for (int i = 1; i < num - 1; i++){
                if (current[i] > current[i-1] && current[i] > current[i+1]){
                    count++;
                }
            }
            System.out.println("Case #" + (j+1) + ": " + count);
        }
    }
    
}