#include <iostream>

template <typename T, typename S>
T max (T a, S b){
T  max=0;
  if (a>b){
  max=a;
  }else{
    max= b;
  }
  return max;
}

int main(void){
  std::cout<<max(7.9,34)<<"\n";
  return 0;
}

 
