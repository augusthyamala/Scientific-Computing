#include <iostream>
#include <vecrtor>
#include <queue>

//representation of graph

std::vector<int> graph(){



}


int main()
{
  std::vector<int> level(V,0)
  std::vector<int> bfs; 
  //vn -> visited nodes, V -> no of vertices
  std::vector<bool> vn(V, false); 

  for(size_t i = 0; i < V; i++){
    if(!vn[i]){
      std::queue<int> q;
      vn[i] = true;
      q.push(i);
      while( !q.empty() ){
	int s = q.front();
	q.pop();
	//l[s] -> neighbours of node s
	for(size_t j: l[s].size()){
	  if( !vn[j] ){
	    q.push(j);
	    vn[j] = true;
	    level[j] = level[s] + 1;
	  }
	}
      }
    }
  }
  
}
