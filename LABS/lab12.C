#include <iostream>

using namespace std;

int main()
{
  double arrayX[1000];

  for(int i = 0; i < 1000; i++)
    {
      arrayX[i] = i * 7.5;
    }

  cout << "Please enter an integer between 0-999: ";
  int x;
  cin >> x;
  if( x < 0 ||  x > 999)
    {
      cout << "Value is out of range." << endl;
    }
  else{
    cout << "The value in array slot " << x << " is " << arrayX[x] << endl;
  }
  return 0;

}
