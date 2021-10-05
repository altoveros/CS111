#include <iostream>

using namespace std;

const int size = 5;

void addition(double array[size], double x);
void subtraction(double array[size], double x);
void multi(double array[size], double x);
void div(double array[size], double x);
void print(const double array[size]);


int main()
{
  double x;
  double array[size];
  cout << "Please enter 5 numbers!" << endl;

  for(int i = 0; i < size; i++)
    {
      cout << "Number " << i+1 << ": ";
      cin >> x;
      array[i] = x;
      cout << endl;

    }
  
  print(array);
  char operation;
  double operand;
  cout << "What operation would you like to use? (+,-,*, or /): ";
  cin >> operation;
  cout << endl;
  cout << "Okay, what operand would you like to perform on the array? (1-?): ";
  cin >> operand;
  switch(operation)
    {
    case '+':
      addition(array, operand);
      break;
    case '-':
      subtraction(array, operand);
      break;
    case '*':
      multi(array, operand);
      break;
    case '/':
      div(array,operand);
    }

  cout << "Okay the contents of the array has changed, they are now: ";
  print(array);
  return 0;
}

void addition(double array[size], double x)
{
  for( int i = 0; i < size; i++)
    {
      array[i] = array[i] + x;
    }
}


void subtraction(double array[size], double x)
{
  for(int i = 0; i < size; i++)
    {
      array[i] = array[i] - x;
    } 
}


void multi(double array[size], double x)
{

  for(int i = 0; i < size; i++)
    {
      array[i] = (array[i]*x);
    }
 
}


void div(double array[size], double x)
{
  for(int i = 0; i < size; i++)
    {
  array[i] = array[i] / x;
    }
}


  
 void print(const double array[size])
  {
    for(int i = 0; i < size; i++)
      {
	if(i+1 < size)
	  {
	    cout << array[i] << ", ";
	  }
	else 	if( i <= size)
	  {
	    cout << array[i];
	  }
	else
	  {
	  }
      }
    cout << endl;
  }
