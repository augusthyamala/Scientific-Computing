#include<iostram>
#include<vector>

int pivot(std::vector<std::vector<double> > &a, int i, int n){
  double max = a[i][i];
  int index; 
  for(size_t l = i; l < n; l++){   
    if(a[i][l] > max ){
      max = a[i][l];
      index = l;
    }
  }
  return index;
}

int n;
int d = 1;
for(size_t i = 0; i < n; i++){
  pivot(std::vector<std::vector<double> > &a, int i, int n)
  if( index!= i){
    d = -1 * d;
    std::swap(a[i],a[l]);
  }
  for(size_t j = i + 1; j < n; j++){
    f = a[i][j]/a[j][j];
    l[j][i] = f;
      for(size_t k = i + 1; k < n; k++){
	u[i][k] = a[i][k] - a[j][k] * f;
      }
  }
 }
