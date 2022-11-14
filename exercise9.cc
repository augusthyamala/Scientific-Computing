#include<iostream>
#include<vector>

double innerproduct(std::vector<double> &r, std::vector<double> &p){
  size_t n = r.size();
  double ip = 0;
  for(size_t i = 0; i < n; i++)
    ip += r[i]*p[i];
  return ip;
}

std::vector matrixproduct(std::vector<std::vector<double> > &A, std::vector<double> &p){
  std::vector<double> mp;
  size_t n = A.size();
  for(size_t i = 0; i < n; i++){
    for(size_t j = 0; j < n; j++)
      mp[i] += A[i][j]*p[j];
}
  return mp;
}

std::vector res(std::vector<double> &a, std::vector<double> &b){
  size_t n = a.size();
  for(size_t i = 0; i < n; i++)
    res[i] = a[i] - b[i];

  return res;
}

int main(){

  std::vector<double> ap;
  std::vector<double> r;
  std::vector<double> b;
  std::vector<double> x;
  std::vector<double> p;

  size_t m;

  ap = matrixproduct( &A, &x);

  r = res(&b, &ax);
  size_t k = 0;

  for(size_t j = 0; j < x.size(); j++)
    p[i] = r[i];

  while(k < m){
    double alpha = innerproduct(&r, &r)/innerproduct(&p, &ap);
    double beta = 1/innerproduct(&r, &r);
    ap = matrixproduct( &A, &p);

    for(size_t i = 0; i < x.size(); i++){
      x[i] = x[i] + alpha * p[i];
      r[i] = r[i] - alpha * ap[i];
}

    beta = innerproduct(&r, &r)*beta;

    for(size_t i = 0; i < x.size(); i++)
      p[i] = r[i] + beta*p[i];
    k += 1;
}
}
