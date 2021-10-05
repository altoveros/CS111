#include <iostream>
#include "circle.h"

using namespace std;


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
