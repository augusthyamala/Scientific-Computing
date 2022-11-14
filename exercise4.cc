#include <iostream>
#include <vector>

int main(){

  size_t n;
  std::cout << "enter the number of nodes:" << std::endl;
  std::cin >> n;

  //dense matrix format

  std::vector< std::vector<double> > a(n, std::vector<double> (n,0));

  for(size_t i = 1; i < n-1; i++){
    a[i][i-1] = 1;
    a[i][i] = 2;
    a[i][i+1] = 1;
  }
  a[0][1] = 1;
  a[n-1][n-2] = 1;
  a[0][0] = 2;
  a[n-1][n-1] = 2;

  //check
  for(size_t i = 0; i < n; i++){
    for(size_t j = 0; j < n; j++)
      std::cout << a[i][j] << "  ";
    std::cout << " " << std::endl; 
  }

  //CSR format

  std::vector<double> b(3*n-2);
  std::vector<int> col(3*n-2);
  std::vector<int> row(n+1,0);

  //for sparse coordinate format
  std::vector<int> row_scf(3*n+2);

  size_t j = 0;

  for(size_t i = 0; i < 3*n-2; i++){
    if(i%3 == 0){
      b[i] = 2;
      col[i] = i/3;
      row_scf[i] = i/3;
    }
    else if(i%3 == 1){
      b[i] = 1;
      col[i] = i/3 + 1;
      row_scf[i] = col[i] - 1;
    }
    else{
      b[i] = 1;
      col[i] = i/3;
      row_scf[i] = col[i] + 1;
    }

    //row in CSR format

    if( i%3 == 2 ){
      j = i/3;
      j = j + 1;
      row[j] = i;
    }
  }

   row[n] = row[n-1] + 2;

   //check

  for(size_t i = 0; i < 3*n-2; i++)
    std::cout << b[i] << "  ";

  std::cout << " " << std::endl;

  for(size_t i = 0; i < 3*n-2; i++)
    std::cout << col[i] << "  ";

  std::cout << " " << std::endl;

  for(size_t i = 0; i < n+1; i++)
    std::cout << row[i] << "  ";
  
  //sparse coordinate method

}
