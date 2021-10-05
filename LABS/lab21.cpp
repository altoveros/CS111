#include <iostream>

using namespace std;
const double PI = 3.14159;


class circle
{
private:
  
  double radius;
  
public:
  void setRadius(double passedR);
  double calcArea();
  double getRadius();
  circle();

  circle(double passedR);

};

  double circle::calcArea()
{
  return PI * (radius * radius);
}

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

int main()
{
  circle one;
  circle two;
  double x;

  cout << "Circle One's radius is " << one.getRadius() << endl;
  cout << endl;

  cout << "Please set a radius for circle two: ";
  cin >> x;
  two.setRadius(x);
   cout << "Circle Two's radius is " << two.getRadius() << endl;
   cout << endl;

   cout << "The area for circle one is " << one.calcArea(); 
   cout << endl;
   
   cout << "The area for circle two is " << two.calcArea();
   cout << endl;
  
}
