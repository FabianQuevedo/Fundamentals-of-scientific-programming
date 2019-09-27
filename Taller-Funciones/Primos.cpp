#include <iostream>

bool  isprime(int a);
void print_primes(int a, int b);

int main(void){
  print_primes(1,100);
  return  0;
}

bool isprime (int a){
  if(a==1) return false;
  for(int jj=2; jj<a;++jj){
    if(a%jj==0){
      return false;
    }
  }
  return true;
}
void print_primes(int a, int b){
  for(int ii=a;ii<=b;++ii){
    if(isprime(ii)==true){
      std::cout<<ii<<"\n";
    }
}
}
