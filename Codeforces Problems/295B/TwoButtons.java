import java.util.*;
 
public class TwoButtons{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int start = s.nextInt();
        int desired = s.nextInt();
        boolean[] visited = new boolean[10001];
        int[] counts = new int[10001];
        Queue<Integer> queue = new LinkedList<>();
        queue.add(start);
        counts[start] = 0;
        while (!queue.isEmpty()){
            int current = queue.remove();
            if (counts[desired] != 0){
                System.out.print(counts[desired]);
                return;
            }
                if (current < desired && (current * 2) <= 10000 && !visited[current * 2]){
                    queue.add(current * 2);
                    counts[current * 2] = counts[current] + 1;
                    visited[current * 2] = true;
                }
                if (current - 1 > 0 && !visited[current - 1]){
                    queue.add(current - 1);
                    counts[current - 1] = counts[current] + 1;
                    visited[current - 1] = true;
                }
        }
        System.out.print(counts[desired]);
        }
}