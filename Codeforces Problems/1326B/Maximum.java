import java.util.*;

// still working on this one

public class Maximum {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int[] nums = new int[s.nextInt()];
        for (int i = 0; i < nums.length; i++){
            nums[i] = s.nextInt();
        }
        int[] sums = new int[nums.length];
        sums[0] = nums[0];
        for (int i = 1; i < nums.length; i++){
        	if (i > 1 && sums[i-1] == 0) {
        		int j = i - 1;
        		while (sums[j] == 0) {
        			j--;
        		}
        		sums[i] = sums[j] + nums[i];
        	} else {
        		sums[i] = sums[i-1] + nums[i];
        	}
            
        }
        for (int i : sums){
            System.out.print(i + " ");
        }
        s.close();
    }
}