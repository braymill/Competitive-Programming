#include <vector>
#include <deque>

//traditional BFS algorithm
//it might be better to use this iterative version of the algorithm than the recursive version in order to avoid running out of stack frames
typedef std::vector<std::vector<int> > graph;

bool sameNetwork(int A, int B, graph &g){
  int numverts = g.size();
  std::vector<bool> visited(numverts);

  //you can push/pop from both back and front with the deque data structure in C++
  //if you change from front to back, it will turn into DFS instead
  std::deque<int> toprocess;
  toprocess.push_back(A);
  while (!toprocess.empty()){
    int next = toprocess.front();
    toprocess.pop_front();
    if (visitied[next]){
      continue;
    }
    visited[next] = true;
    if (next == B){
      return true;
    }
    for (auto it : g[next]){
      if (!visited[next]){
        toprocess.push_back(it);
      }
    }
  }
  return false;
}
