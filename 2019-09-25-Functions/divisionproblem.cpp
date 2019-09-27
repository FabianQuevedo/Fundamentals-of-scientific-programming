#include <iostream>

int suma (int a, int b);
int main(void){
  std::cout<<suma(200000,300000)<<"\n";
  return 0;
}
int suma (int a, int b){
  int result=0;
  for(int n=a;n<=b;n=+1){
    if(n%3==0 or n%5==0 or n%7==0){
      result=+n;
    }
  }
  return result;
}
