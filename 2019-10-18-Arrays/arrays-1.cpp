#include <iostream>
#include <array>
#include <cmath>

int main(void){
  const int N=10;
  std::array<double, N> myarray {0};
  for(int j=1;j<=N;++j){
    myarray[j-1]=j;
  }
  double prom=0.0;
  double suma=0.0;
  //for(int i=0;i<N;++i ){
//    suma+=myarray[i];
// }
  for(auto x : myarray){
    suma+=x;
  }
  prom=suma/N;
  std::cout<<prom<<std::endl;

  double desest=0.0;
  double sumat=0.0;
  for(int ii=0;ii<N;++ii){
    sumat+=std::pow(myarray[ii]-prom,2);
  }
  desest=std::sqrt(sumat/N);
  std::cout<<desest<<std::endl;
  return 0;
}
