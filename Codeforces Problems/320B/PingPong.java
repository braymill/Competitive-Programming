import java.util.*;
 
public class PingPong{
    public static class Node{
        public int a;
        public int b;
        public List<Edge> adj;
        boolean visited;
        
        public Node(int aVal, int bVal){
            a = aVal;
            b = bVal;
            adj = new ArrayList<>();
        }
    }
    
    public static class Edge{
        public Node next;
        
        public Edge(Node n){
            next = n;
        }
    }
    
    public static boolean BFS(ArrayList<Node> graph, Node start, Node desired){
    	for (Node n : graph) {
    		n.visited = false;
    	}
        LinkedList<Node> queue = new LinkedList<>();
        queue.add(start);
        while (!queue.isEmpty()){
            Node curr = queue.removeFirst();
            if (!curr.visited){
                curr.visited = true;
                if (curr.a == desired.a && curr.b == desired.b){
                    return true;
                }
                for (Edge e : curr.adj){
                    if (!e.next.visited){
                        queue.add(e.next);
                    }
                }
            }
        }
        return false;
    }
    
    public static void main(String[] args){
       Scanner s = new Scanner(System.in);
       int queries = s.nextInt();
       ArrayList<Node> graph = new ArrayList<>();
       while (s.hasNext()){
           int queryType = s.nextInt();
           if (queryType == 1){
               int first = s.nextInt();
               int second = s.nextInt();
               Node m = new Node(first, second);
               for (Node n : graph){
                   if (((n.a > m.a) && (n.a < m.b)) || ((n.b > m.a) && (n.b < m.b))){
                       n.adj.add(new Edge(m));
                   }
                   if (((m.a > n.a) && (m.a < n.b)) || ((m.b > n.a) && (m.b < n.b))){
                       m.adj.add(new Edge(n));
                   }
               }
               graph.add(m);
           }
           if (queryType == 2){
               int start = s.nextInt();
               int end = s.nextInt();
               System.out.println((BFS(graph, graph.get(start - 1), graph.get(end - 1)) ? "YES" : "NO"));
           }
       }
    }
}