#include <iostream>

using namespace std;

double dist (double X , double Y);

int main()
{
  double numberOne;
  double numberTwo;
  double result;
  
  cout << "\nPlease enter a value for number 1: ";
  cin >> numberOne;
  
  cout << "Please enter a value for number 2: ";
  cin >> numberTwo;
  
  result = dist(numberOne, numberTwo);
  
  cout << "\nThe distance between '" << numberOne << "' and '"<< numberTwo << "'";
  cout << " is: " << result << "\n" << endl; 
  
  return 0;
}

double dist(double X, double Y)
{
  double Z;
  
  Z = X - Y;
  
  if(Z < 0)
    {
      Z = Z * (-1);
    }
  
  return Z;
}
