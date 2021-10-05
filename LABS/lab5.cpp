#include <iostream>

using namespace std;

int main()
{
  int x;
  cout << "Please Enter a number in between 0-10: " << endl;
  cin >> x;
 
  switch(x)
    {
    case 0: x = 0;
      cout << "Zero" << endl;
      break;
    case 1: x = 1;
      cout << "One" << endl;
      break;

    case 2: x = 2;
      cout << "Two" << endl;
      break;
    case 3: x = 3;
      cout << "Three" << endl;
      break;

    case 4: x = 4;
      cout << "Four" << endl;
      break;

    case 5: x = 5;
      cout << "Five" << endl;
      break;

    case 6: x = 6;
      cout << "Six" << endl;
      break;

    case 7:  x = 7;
      cout << "Seven" << endl;
      break;

    case 8: x = 8;
      cout << "Eight" << endl;
	break;

    case 9:  x = 9;
      cout << "Nine" << endl;
      break;

    case 10: x = 10;
      cout << "Ten" << endl;
      break;


    default:
      cout << "The number is not in between 0-10! ";
    }
}


