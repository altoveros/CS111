#include <iostream>

using namespace std;


void MathOperators(double d1, double d2, double d3, double d4, double &min, double &max, double &avg);

int main()
{
  double d1, d2, d3, d4;
  double avg;
  double min = 0;
  double max = 0;

  cout << "Please enter four numbers; " << endl;

  cout << "Number 1: ";
  cin >> d1;
  cout << endl;
  cout << "Number 2: ";
  cin >> d2;
  cout << endl;
  cout << "Number 3: ";
  cin >> d3;
  cout << endl;
  cout << "Number 4: ";
  cin >> d4;

  MathOperators(d1,d2,d3,d4, min, max, avg);

  cout << "Minimum is " << min << endl;
  cout << "Maximum is " << max << endl;
  cout << "The average is " << avg << endl;

  return 0;
}


void MathOperators(double d1, double d2, double d3, double d4, double &min, double &max, double &avg)
{

  if( d1 < d2 && d1 < d3 && d1 < d4)
    {
      min  = d1;
    }
  else  if( d2 < d1 && d2 < d3 && d2 < d4)
    {
      min = d2;
    }
  else  if( d3 < d2 && d3 < d1 && d3 < d4)
    {
      min = d3;
    }
  else
    {
      min = d4;
    }



  if( d1 > d2 && d1 > d3 && d1 > d4)
    {
      max = d1;
    }
  else   if( d2 > d1 && d2 > d3 && d2 > d4)
    {
      max = d2;
	}
  else  if( d3 > d2 && d3 > d1 && d3 > d4)
    {
      max = d3;
    }
  else
    {
      max = d4;
    }


  
  avg  = (d1 + d2 + d3 + d4)/ 4;
 



}
