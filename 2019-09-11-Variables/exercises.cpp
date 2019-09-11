#include <iostream>

const double convfactor=1.609;
int main(void){

  double x=0;
  std::cout<<"Ingresar distancia en millas"<<"\n";
  std::cin>>x;
  x=x*convfactor;
  std::cout<<"La conversion corresponde a "<<x<<" kilometros"<<"\n";
  

  return 0;
}
