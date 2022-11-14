#include <iostream>
#include <vector>


void symmetricpermutation(std::vector<std::vector<double> > &A, std::vector<size_t> &permutation){

  size_t n = A.size();
  std::vector<std::vector<double> > temp(n, std::vector<double> (n,0));

//row swap
  for(size_t i = 0; i < n; i++){
    for(size_t j = 0; j < n; j++)
      temp[i][j] = A[permutation[i]][j]
	}
//col swap
  for(size_t j = 0; j < n; j++){
    for(size_t i = 0; i < n; i++)
      A[i][j] = temp[permutation[i]][j]
	}
  
}


int find(std::vector<int> &p, int k){
  size_t n = p.size();
  size_t i;
  for(i = 0; i < n; i++){
    if(p[i] == k)
      break;
  }
  return i;
}

int main()
{
 
         
}
