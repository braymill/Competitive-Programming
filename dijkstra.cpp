#include <deque>
#include <vector>
#include <queue>

typedef std::vector< std::vector <std:: pair<int, int> > > graph;

// runtime is O(ElogE) - this is due to the pushing of E things onto the priority queue - not constant time
int dijkstra(int start, int end, graph &g){
  struct Visit{
    int dest;
    int cost;
    // comparator to change the default C++ pq to a min queue instead of a max queue
    bool operator<(const Visit &other) const{
      return cost > other.cost;
    }
  };
  std::priority_queue<Visit> pq;
  int N = g.size();
  std::vector<bool> visited(N);
  pq.push({start, 0});
  // if the pq does become empty, it means we never found a path from start to end
  // in that case, we could return some value to signify we never found the path
  while (!pq.empty()){
    Visit next = pq.top();
    pq.pop();
    // needed for the algo to be correct
    if (visited[next.dest]){
      continue;
    }
    // need to mark nodes as visited outside of the later for loop
    visited[next.dest] = true;
    // done! we found the end node!
    if (next.dest == end){
      return next.cost;
    }
    // pushing neighbors
    for (auto nb : g[next.dest]){
      // needed for better performance - not pushing extra stuff onto the queue
      if (!visited[nb.first]){
        pq.push({nb.first, next.cost + nb.second});
      }
    }
  }
}
