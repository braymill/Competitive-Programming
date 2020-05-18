import java.util.*;

public class BusRoutes {
	public static void main(String[] args){
		
		//Google Kick Start Round B 2020 Question 2 - solved one test set
		
        Scanner s = new Scanner(System.in);
        int cases = s.nextInt();
        for (int i = 0; i < cases; i++){
            int num = s.nextInt();
            long day = s.nextLong();
            long[] buses = new long[num];
            for (int j = 0; j < num; j++){
                buses[j] = s.nextLong();
            }
            int idx = num - 1;
            long latest = buses[0];
            while (latest < day){
                latest += buses[0];
            }
            long ans = latest;
            while (idx >= 0){
                if (ans % buses[idx] == 0){
                    idx--;
                } else {
                    ans--;
                }
            }
            System.out.println("Case #" + (i+1) + ": " + (ans > 0 ? ans : 1));
        }
    }
}