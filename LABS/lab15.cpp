#include <iostream>
#include <iomanip>

using namespace std;

void treeTop();
void treeTrunk(int);
void drawTree(int, int);

int main()
{
  int treeHeight, numberOfTrees;
  char answer;
  do
    {  cout << "\n";
  cout << "======================" << endl;

  cout << "Enter tree height: ";
  cin >> treeHeight;

  cout << "Enter number of trees: ";
  cin >> numberOfTrees;

  cout << "======================\n" << endl;

  drawTree(treeHeight, numberOfTrees);

  cout << "\nALL TREES DRAWN :)" << endl;
  cout << "Do you want more trees? (Y/N)?: ";
  cin >> answer;
    }
  while( answer != 'n' && answer != 'N');
  return 0;
}

void treeTop()
{
  cout << setw(4) << right << "^" << endl;
  cout << setw(3) << right << "/" << setw(2) << right << "\\" << endl;
  cout << setw(2) << right << "/" << setw(4) << right << "\\" << endl;
  cout << setw(0) << right << "/_____\\" << endl;
}

void treeTrunk(int height)
{
  for(int i = 0; i < height; i++)
    {
      cout << "  | |  " << endl;
    }
}

void drawTree(int height, int numberOfTrees)
{
  static int numberOfT = 0;
  for(int i = 0; i < numberOfTrees; i++)
    {
      cout << "DRAWING TREE '" << i+1 << "' [...]"  << endl;
      treeTop();
      treeTrunk(height);
      cout << "\n";
      numberOfT++;
    }
  cout << "There are currently " << numberOfT << " trees in the forest " << endl;
}

