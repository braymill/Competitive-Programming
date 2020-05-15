import java.io.*;
import java.util.*;

// 1/31/2020 UTPC

public class IceCream {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        ArrayList<String> strings = new ArrayList<>();
        while (scan.hasNext()){
            strings.add(scan.nextLine());
        }
        Collections.sort(strings);
        boolean notNum = false;
        int index = 0;
        while (!notNum){
            char first = strings.get(index).charAt(0);
            if (first >= 65 && first <= 122){
                System.out.print(strings.get(index));
                notNum = true;
            }
            index++;
        }
    }
}