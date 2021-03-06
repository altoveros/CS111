#include <iostream>
#include "circle.h"

const double PI = 3.14159;


using namespace std;

void circle::setRadius(double passedR)
{
  if(passedR < 0)
    {
      radius = 0;
    }

  radius = passedR;
}

double circle::getRadius()
{
  return radius;
}

double circle::calcArea()
{
  return PI * (radius * radius);
}



circle::circle()
{
  radius = 0;
}


circle::circle(double passedR)
{
  radius = 0;
  if(passedR < 0)
    {
      radius = 0;
    }
  else
    setRadius(passedR);

}

