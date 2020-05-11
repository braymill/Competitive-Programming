import java.io.*;
import java.util.*;

public class Numbers {

	// from 4/10/2020 utpc - not complete
	
    public static void main(String[] args) {
        boolean[] isPrime = new boolean[10010];
        Arrays.fill(isPrime, true);
        for (int p = 2; p * p <= 10005; p++){
            if (isPrime[p]){
                for (int start = p * 2; start <= 10005; start += p){
                    isPrime[start] = false;
                }
            }
        }
        boolean[] isSquare = new boolean[1000005];
        for (int i = 0; i < 1000; i++){
            isSquare[i * i] = true;
        }
        Scanner s = new Scanner(System.in);
        int[] nums = new int[s.nextInt()];
        for (int i = 0; i < nums.length; i++){
            nums[i] = s.nextInt();
        }
        for (int i = 0; i < nums.length; i++){
            int current = nums[i];
            int index = 2;
            int counter = 0;
            while (current != 1 && index < Math.sqrt((double) current)){
                if (!isPrime[index] && !isSquare[index] && current % index == 0){
                    current /= index;
                    counter++;
                }
                index++;
            }
            if (current == 1){
                System.out.println(counter);
            } else{
                System.out.println("IMPOSSIBLE");
            }
        }
    }
}