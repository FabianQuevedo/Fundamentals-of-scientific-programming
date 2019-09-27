#include <iostream>

int max(int a, int b);
double max(double a, double b);

int main(void){
  std::cout<<max(7,8,345.4)<<"\n";
  return 0;
}
int max (int a, int b){
  int max=0;
  if (a>b){
  max=a;
  }else{
    max= b;
  }
  return max;
}
double  max (double  a, double b){
  double  max=0;
  if (a>b){
  max=a;
  }else{
    max= b;
  }
  return max;
}
