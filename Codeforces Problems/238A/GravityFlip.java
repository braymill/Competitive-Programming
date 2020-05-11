import java.util.*;
 
public class GravityFlip{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        s.nextLine();
        ArrayList<Integer> nums = new ArrayList<>();
        while (s.hasNext()){
            nums.add(s.nextInt());
        }
        Collections.sort(nums);
        for (int i : nums){
            System.out.print(i + " ");
        }
    }
}