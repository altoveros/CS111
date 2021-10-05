#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int size;


  cout << "What size multiplication table would you like? : " ;
  cin >> size;
  cout << endl;
  if(size <= 0)
    {
      cout << "Invalid output try again! " << endl;
    }
  else
    {
  int array[size][size];
  cout << "    "; 
  for(int o = 0; o <= size; o++)
    {
      cout << left << setw(4) << o;
      
    }
  cout << endl;
  cout << "    ";
  for(int k = 0; k < size*4; k++)
    {
      cout << "-";
    }

  cout << endl;

  for(int i = 0; i <= size; i++)
    {
   
      for(int j = 0; j <= size; j++)
	{
	  array[i][j] = i*j;
	  cout << left << setw(3) << array[i][j] << " ";
	}
      cout << endl;
    }

    }

  return 0;
}
