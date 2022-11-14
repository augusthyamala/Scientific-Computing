#include <iostream>
#include <random>
#include <string>
#include <math.h>
#include <fstream>

int main(){
  std::mt19937 gen (12345896);

  std::ofstream myfile;
  myfile.open("ex10.txt");

  size_t m = 10000;
  size_t n = 2; //dimension
  double f = 0.0;
  size_t l = 0;

  for(size_t j = 0; j < m; j++){
    double r = 0;
    l += 1;
    for(size_t i = 0; i < n; i++){
      std::uniform_real_distribution<double> dis(0.0, 1.0);
      double x = dis(gen);
      r += x*x;
    }
    if(r <= 1)
      f += 1;

    double x = pow(2,n) * f/l;
    double diff = M_PI - x;
    myfile << l << " " << x << " " << diff << "\n";  
}

  double area = pow(2,n) * f/m;
  std::cout << "area is: " << area << std::endl;

}
