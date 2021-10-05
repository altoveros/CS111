#include <iostream>

using namespace std;

int main()
{

  int arr[5] = {0,0,0,0,0};

  int *arrPoint = &arr[0];

  for(int i = 0; i < 5; i++)
    {
      int x;
      cout << "Enter value " << i+1 << " of " << 5 << " to be inputted: ";
      cin >> x;
      *arrPoint = x*3;
      *arrPoint++;
   
    }
  cout << endl;
  for( int i = 0; i < 5; i++)
    {
      cout << arr[i] << " ";

    }
  
}
