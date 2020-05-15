import java.io.*;
import java.util.*;

// 4/10/2020 UTPC
public class Grocery {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int cost1 = s.nextInt();
        int cost2 = s.nextInt();
        int cost3 = s.nextInt();
        ArrayList<Store> stores = new ArrayList<>();
        for (int i = 0; i < n; i++){
            String name = s.next();
            int first = s.nextInt();
            int second = s.nextInt();
            int third = s.nextInt();
            Store store = new Store(name, first*cost1 + second*cost2 + third*cost3);
            stores.add(store);
        }
        Collections.sort(stores);
        System.out.println(stores.get(0).name + " " + stores.get(0).cost);
    }
    
    public static class Store implements Comparable<Store>{
        String name;
        int cost;
        
        public Store(String n, int c){
            name = n;
            cost = c;
        }
        
        public int compareTo(Store other){
            if (cost == other.cost){
                return name.compareTo(other.name);
            } else {
                return cost - other.cost;
            }
        }
    }
}