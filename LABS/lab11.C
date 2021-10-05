#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin;
  ofstream fout;
  string fileName;


  cout << "Please enter a file name: ";
  cin >> fileName;

  fin.open(fileName.data());
  if(fin)
    {
      fout.open("input.txt");
	int addValues;
      int total = 0;

      while( fin >> addValues)
	{
	  cout << "Read " << addValues << " from file" << endl;
	  total += addValues;

	}
      cout << "The total is: " << total << "." << endl;

      fin.close();
      fout.close();

    }
  else
    {
      cout << "Failed to open the file." << endl;
    }

  return 0;

}
