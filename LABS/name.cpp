#include <iostream>

using namespace std;

int main()
{
  string name;
  bool question = false;
  string punctuation;
  int  num1 = 0;
  int  num2 = 0;
 
  cout << "What is your name?" << endl;
  cin >> name;
  cout << endl;
  cout << "Hello! " << name <<  endl;
 
  cout << "Are you a CS Major? 0 for false 1 for true " << endl;

  cin >> question;

  cout << "CS Major: " << question;
  cout << endl;

  cout << "What is your favorite punctuation?" << endl;
  
  cin >> punctuation;
 
  cout << "Your favorite punctuation mark is: " << punctuation << endl;

  cout << "Please enter a number: ";

  cin >> num1;

  cout << "Please enter a second number: ";

  cin >> num2;

  cout << "The result for dividing is " << (double) num1/num2 << endl;
  cout << "The value is " << num1/num2 << endl;
  cout << "The remainder is " << num1%num2 << endl;
 
  return 0;


}
