import java.util.*;

public class A{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        String str = s.nextLine();
        int na = 0;
        int nb = 0;
        int nc = 0;
        for (int i = 0; i < str.length(); i++){
            if (str.charAt(i) == 'a'){
                na++;
            } else if (str.charAt(i) == 'b'){
                nb++;
            } else {
                nc++;
            }
        }
        char[] c = str.toCharArray();
        Arrays.sort(c);
        String sas = "";
        for (char ch : c){
            sas += ch;
        }
        if (sas.equals(str) && (nc == na || nc == nb) && na > 0 && nb > 0 && nc > 0){
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}