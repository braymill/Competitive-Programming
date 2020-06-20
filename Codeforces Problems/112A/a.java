import java.util.*;

public class a{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        String str1 = s.next();
        String str2 = s.next();
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();
        int c = str1.compareTo(str2);
        if (c < 0){
            System.out.println(-1);
        } else if (c > 0){
            System.out.println(1);
        } else {
            System.out.println(0);
        }
    }  
}