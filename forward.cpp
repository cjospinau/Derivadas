#include <iostream>
#include <cmath>
#include <cstdio>

double f(double x);
double forward(double x,double h);

int main()
{
  double x = M_PI;
  double h = 0.1;

  for (h=0.1; h>=1.0e-7;h=h/10)
    {
      std::printf("%25.16e\t",h);
      std::printf("%25.16e\n", forward(x,h));
	}
}

double f(double x)
{
  double y = std::sin(x);
    return y;
}

double forward(double x, double h)
{
  double result = (f(x + h)- f(x))/h;
  return result;
}
