#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  string i1 = "";
  string i2 = "";
  string i3 = "";
  double item1 = 0;
  double item2 = 0;
  double item3 = 0;
  double tax = 0;
  double totaltax = 0;
  double subtotal = 0;
  double total = 0;

  cout << "Please enter the name of your first item: ";
  getline(cin, i1);
  cout << "Please enter the price of the item: ";
  cin >> item1;
  cin.ignore();

  cout << "Please enter the name of your second item: ";
  getline(cin, i2);
  cout << "Please enter the price of the item: ";
  cin >> item2;
  cin.ignore();

  cout << "Please enter the name of your third item: ";
  getline(cin, i3);
  cout << "Please enter the price of the item: ";
  cin >> item3;
  cin.ignore();
  
  cout << "Enter the tax rate: ";
  cin >> tax;
  tax = tax/100;

  cout << endl;

  cout << "******************************" << endl; 
  cout << setw(25) << left << i1;
  cout << "$" <<  setw(10) << left << item1 << endl;
  
  cout << setw(25) << left << i2;
  cout << "$" << setw(10) << left << item2 << endl;
  
  cout << setw(25) << left << i3;
  cout << "$" <<  setw(10) << left << item3 << endl;
  cout << endl;
  
  subtotal = item1+item2+item3;
  totaltax = subtotal*tax;
  total = subtotal + totaltax;

  cout << setw(25) << left << "Subtotal: ";
  cout << "$" << setw(9) << left << subtotal << endl;

  cout << setw(25) << left << "Tax: ";
  cout << "$" << setw(9) << left << fixed << setprecision(2) << totaltax << endl;
  
  cout << setw(25) << left << "Total: ";
  cout << "$" << setw(9) << left << total << endl;

  cout << "******************************" << endl;
  cout << "Thank you for shopping with us" << endl;

  cout << "******************************" << endl;
}


  


 
