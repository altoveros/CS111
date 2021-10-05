#include <iostream>


using namespace std;


int main()
{
  double x = 0;
  double y = 0;
  double input;
  double * xpointer = &x;
  double *  ypointer = &y;
  
  cout << "The value of x is " << x << " and it's memory location is " << &xpointer << endl;

  cout << "Please enter a value for x: ";
  cin >> input;
* xpointer = input;
  cout << endl;
  cout << "The value of x now is " << x << " and it's memory location is " << &xpointer << endl;

  y = 3*x;

  cout << "The value of y is " << y << " and it's memory location is " << &ypointer << endl;

  cout << "The value of (x+y) / 7 is " << (x+y)/7 << endl;
  y = 4;

  cout << "The value of y is " << y << " and it's memory location is " << &ypointer << endl;

  cout << "The value of (x+y) / 7 is " << (x+y)/7 << endl;

}
