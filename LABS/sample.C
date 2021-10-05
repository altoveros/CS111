#include <iostream>

using namespace std;

void print(int);

int main()
{
  int userInput;
  cout << "Please enter a number: "; 
  cin >> userInput;
  
  print(userInput);

  return 0;
}

void print(int printNumber)
{
  cout << "Your number is: " << printNumber << endl;
}
