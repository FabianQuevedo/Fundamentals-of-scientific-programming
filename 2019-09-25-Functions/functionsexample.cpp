#include <iostream>

void Helloworld (int a);
int main(void){
  int a;
  Helloworld (a);
  return 0;
}
void Helloworld (int a){
  std::cin>>a;
  std::cout<<a<<"\n";
}
