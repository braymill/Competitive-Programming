import java.io.*;
import java.util.*;

public class Nodes {
	//from 4/10 utpc - not complete

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        ArrayList<Node> nodes = new ArrayList<>();
        int n = s.nextInt();
        for (int i = 0; i < n; i++){
            nodes.add(new Node(-1));
        }
        s.nextLine();
        while (s.hasNextInt()){
            // zero index
            int first = s.nextInt() - 1;
            int second = s.nextInt() - 1;
            if (nodes.get(first).num == -1){
                Node toAdd = new Node(first);
                toAdd.adj.add(new Node(second));
                nodes.add(toAdd);
            } else {
                nodes.get(first).adj.add(new Node(second));
            }
        }
        System.out.print(numTrees(nodes.get(0), 0));
        
    }
    
    public static int numTrees(Node current, int count){
        if (current.adj.size() == 0){
            return 1;
        } else {
            int curr = count;
            for (Node n : current.adj){
                count *= (1 + numTrees(n, curr));
            }
            return count;
        }
    }
    
    public static class Node{
        int num;
        ArrayList<Node> adj;
        
        public Node(int n){
            num = n;
            adj = new ArrayList<>();
        }
    }
}