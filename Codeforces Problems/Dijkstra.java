import java.util.*;
import java.io.*;
 
// https://codeforces.com/problemset/problem/20/C
// solved

public class Dijkstra{
    public static class Node implements Comparable<Node>{
        public int num;
        public List<Edge> adj;
        public int cost;
        public boolean visited;
        public Node prev;
        
        public Node(int n, Node before){
            num = n;
            adj = new ArrayList<>();
            cost = Integer.MAX_VALUE;
            visited = false;
            prev = before;
        }
        
        public int compareTo(Node other){
            return cost - other.cost;
        }
    }
    
    public static class Edge{
        public Node next;
        public int weight;
        
        public Edge(Node n, int w){
            next = n;
            weight = w;
        }
    }
    
    public static void dijkstra(ArrayList<Node> graph, Node start){
        PriorityQueue<Node> queue = new PriorityQueue<>();
        start.cost = 0;
        queue.add(start);
        
        // standard dijkstra's algo
        while (!queue.isEmpty()){
            Node curr = queue.remove();
            if (!curr.visited) {
            	curr.visited = true;
                for (Edge e : curr.adj){
                    Node nextNode = e.next;
                    int newCost = curr.cost + e.weight;
                    if (!nextNode.visited && newCost < nextNode.cost){
                        nextNode.cost = newCost;
                        queue.add(nextNode);
                        nextNode.prev = new Node(curr.num, curr.prev);
                        // set the prev node so we can trace path later
                        
                    }
                }
            }
        }
    }
    
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int verts = s.nextInt();
        int edges = s.nextInt();
        
        ArrayList<Node> graph = new ArrayList<>(verts);
        // initializing the nodes to add to their adj lists
        for (int i = 0; i < verts; i++){
            graph.add(new Node(i, null));
        }
        
        // loop creates the graph w/ adj lists
        for (int i = 0; i < edges; i++){
            int start = s.nextInt() - 1;
            int end = s.nextInt() - 1;
            int weight = s.nextInt();
            
            Node nodeStart = graph.get(start);
            Node nodeEnd = graph.get(end);
            
            nodeStart.adj.add(new Edge(nodeEnd, weight));
            nodeEnd.adj.add(new Edge(nodeStart, weight));
        }
        
        int source = 0;
        int sink = verts - 1;
        
        dijkstra(graph, graph.get(source));
        
        StringBuilder sb = new StringBuilder();
        Node nodeSink = graph.get(sink);
        sb.append(sink + 1);
        // traces shortest path from end to start nodes
        ArrayList<Integer> nodes = new ArrayList<>();
        while (nodeSink.prev != null){
            nodes.add(nodeSink.prev.num + 1);
            nodeSink = nodeSink.prev;
        }
        // case where there was no path
        if (nodes.size() == 0){
            System.out.print(-1);
        } else {
            // reverses the string because we started at the end
            for (int i = nodes.size() - 1; i >= 0; i--){
                System.out.print(nodes.get(i) + " ");
            }
            System.out.print(verts);
        }
    }
}