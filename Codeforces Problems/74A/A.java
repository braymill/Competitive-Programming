import java.util.*;

public class A{
    public static class Contestant implements Comparable<Contestant>{
        String name;
        int points;
    
        public Contestant(String s, int p){
            name = s;
            points = p;
        }
    
        public int compareTo(Contestant other){
            return points - other.points;
        }
    }
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        ArrayList<Contestant> board = new ArrayList<>();
        for (int i = 0; i < n; i++){
            String name = s.next();
            int score = 0;
            score += 100 * s.nextInt();
            score -= 50 * s.nextInt();
            for (int j = 0; j < 5; j++){
                score += s.nextInt();
            }
            Contestant c = new Contestant(name, score);
            board.add(c);
        }
        Collections.sort(board);
        System.out.println(board.get(board.size() - 1).name);
    }
}

