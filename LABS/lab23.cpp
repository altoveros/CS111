#include <iostream>

using namespace std;

const int size = 10;
void seqSearch(int arr[size], int key );

int main()
{
  int arr[size] = {12, -7, 3, 17, 42, 6, 18, -15, 0, 1};
  int x;

  cout << "Enter a number to search for: ";
  cin >> x;
  seqSearch(arr, x);



}

void seqSearch(int arr[size], int key)
{
  
  for(int i = 0; i < size; i++)
    {
      if(arr[i] == key)
	{
	  cout << key << " was found in array slot " << i << endl;
	  break;
	}
      else
	{
	  cout << key << " was not found." << endl;
	  break;
	}
    }
}

