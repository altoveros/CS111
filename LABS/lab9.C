#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
  cout << "    ";
  for (int z = 1; z < 10; z++)
    {
      cout << left << setw(4) << z;
    }
  cout << endl;
  cout << "---------------------------------------" << endl;
  for(int i = 1; i < 10; i++)
    {
      cout << i << " | ";
      for(int x = 1; x < 10; x++)
	{
	  cout << left << setw(3) <<  x*i << " ";
	}
      cout << endl;
    
    }
}
