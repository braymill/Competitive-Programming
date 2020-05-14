import java.util.*;

https://codeforces.com/contest/1352/problem/A - completed

public class SumOfRound {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        boolean[] place = new boolean[4];
        Arrays.fill(place, false);
        int cases = s.nextInt();
        for (int i = 0; i < cases; i++){
            int curr = s.nextInt();
            if (curr > 0) {
            	String str = "" + curr;
                int count = 0;
                for (int a = str.length() - 1; a >= 0; a--){
                    if (str.charAt(a) != '0'){
                        place[a] = true;
                        count++;
                    }
                }  
                if (count <= 1){
                	System.out.println(1);
                    System.out.println(curr);
                } else {
                	System.out.println(count);
                    for (int j = str.length() - 1; j >= 0; j--){
                        if (place[j]){
                            int digit = (int) str.charAt(j) - 48;
                            if (digit != 0) {
                            	System.out.print((int) (digit * Math.pow(10, str.length() - j - 1)) + " ");
                            }   
                        }
                    }
                    System.out.print("\n");
                }
            }	
        }
        s.close();
    }
}