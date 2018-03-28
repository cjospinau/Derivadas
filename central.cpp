#include <iostream>
#include <cmath>
#include <cstdio>

double f(double x);
double central(double x, double h);

int main()
{
  double x = M_PI;
  double h = 0.1;

  for(h=0.1;h>=1.0e-7;h=h/10)
    {
      std::printf("%25.16e\t",h);
      std::printf("%25.16e\n",central(x,h));
    }
  return 0;
}
double f(double x)
{
  double y = std::sin(x);
  return y;
}
double central(double x, double h)
{
  double result = (f(x + h/2)-f(x))/(h/2);
  return result;
}
