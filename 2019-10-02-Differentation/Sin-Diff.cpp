#include <iostream>
#include <cmath>

double funsin(double x);
double dev_central(double x,double h);
double dev_forward(double x, double h);
double dev_forward_richardson(double x, double h);
double dev_central_richardson(double x, double h);
int main(void){
  std::cout.precision(16); std::cout.setf(std::ios::scientific);

  double x = M_PI/3.0; // M_PI defined inside cmath
  double h = 0.1;

  for(x=0.0; x<=M_PI;x+=0.1){
  std::cout << x << "\t" << h << "\t"
	    << std::cos(x) << "\t"
	    << dev_forward(x, h) << "\t"
	    << dev_central(x, h) << "\t"
	    << dev_forward_richardson(x, h) << "\t"
	    << dev_central_richardson(x, h) << "\n";
  }
  return 0;
}

double funsin(double x){
  return std::sin(x);
}

double dev_forward(double x, double h){
  return ((funsin(x+h)-funsin(x))/h);
}
double dev_central(double x,double h){
  return (funsin(x+h/2)-funsin(x-h/2))/h;
}
double dev_forward_richardson(double x, double h){
  double result1 = dev_forward(x, h);
  double result2 = dev_forward(x, h/2);
  return (4*result2 - result1)/3;
}
double dev_central_richardson(double x, double h)
{
  double result1 = dev_central(x, h);
  double result2 = dev_central(x, h/2);
  return (4*result2 - result1)/3;
}
