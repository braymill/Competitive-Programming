import java.io.*;
import java.util.*;

// 2/28/2020 UTPC

public class Inventory {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        int beans = s.nextInt();
        int rice = s.nextInt();
        int chef = s.nextInt();
        int astro = s.nextInt();
        int totalCals = 1440 * beans + 590 * rice + chef * 224 + 130 * astro;
        System.out.print((int) Math.floor(totalCals / 2000));
    }
}