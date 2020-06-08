import java.util.*;

public class A {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        String str = s.next();
        str = str.toLowerCase();
        String so = "";
        for (int i = -1; i < str.length() - 1; i++){
            char c = str.charAt(i + 1);
            if (!isVowel(c)){
                so += ".";
                so += c;
            }
        }
        System.out.println(so);
    }

    public static boolean isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
    }
}