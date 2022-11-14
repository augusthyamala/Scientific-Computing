#include <iostream>
#include <queue>
#include <vector>

//s->node, V->number of vertices

std::vector<bool> visited(V);

void dfs(int s){

  if( !visited[s] )
    {
      visited[s] = true;
      //a[s] -> list of nbrs of node s
      for(size_t i = 1; i <= a[s].size; i++){
	if( visited[a[s][i]] == false )
	  dfs(a[s][i])
	    }
    }
  
}
