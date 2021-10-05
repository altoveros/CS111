#include <iostream>

using namespace std;
const double PI = 3.14159;


class circle
{
public:

  double radius;

  double calcArea();

};

double circle::calcArea()
{
  return PI * (radius * radius);
}



int main()
{
  double x;
  double y;
  circle one;
  circle two;

  cout << "Please enter the radius for circle 1: ";
  cin >> x;
  one.radius = x;
  cout << endl;

  cout << "Please enter the radius for circle 2: ";
  cin >> y;
  two.radius = y;
  cout << endl;

  cout << "The area for circle one is: " << one.calcArea() << endl;
  cout << "The area for circle two is: " << two.calcArea() << endl;

}



