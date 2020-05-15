import java.io.*;
import java.util.*;

// 2/28/2020 UTPC

public class ThreatAnalysis {

    public static class Threat implements Comparable<Threat>{
        String label;
        int zombieCount;
        int dist;
        double aggro;
        
        public Threat(String l, int z, int d, double a){
            label = l;
            zombieCount = z;
            dist = d;
            aggro = a;
        }
        
        public int compareTo(Threat other){
            int distCompare = this.dist - other.dist;
            if (distCompare != 0){
                return distCompare;
            } else {
                int zCompare = other.zombieCount - this.zombieCount;
                if (zCompare != 0){
                    return zCompare;
                } else {
                    double aCompare = other.aggro - this.aggro;
                    if (aCompare != 0){
                        if (aCompare < 0){
                            return -1;
                        } else {
                            return 1;
                        }
                    } else {
                        return this.label.compareTo(other.label);
                    }
                }
            }
        }
    }
    
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        ArrayList<Threat> list = new ArrayList<>();
        Scanner s = new Scanner(System.in);
        int num = s.nextInt();
        for (int i = 0; i < num; i++){
            String label = s.next();
            int z = s.nextInt();
            int d = s.nextInt();
            double a = s.nextDouble();
            Threat t = new Threat(label, z, d, a);
            list.add(t);
        }
        Collections.sort(list);
        for (Threat t : list){
            System.out.println(t.label);
        }
    }
}