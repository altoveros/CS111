#include <iostream>

using namespace std;

const int size = 3;

void math(double array[size], double &min, double &max, double &avg);

int main()
{
  double array[size];
  double avg;
  double x;
  double min;
  double max;

  cout << "Please enter four numbers; " << endl;

  for(int i = 0; i < size; i++)
    {
      cout << "Number " << i+1 << ": ";
      cin >> x;
	array[i] = x;
      cout << endl;
  }

  math(array, min, max, avg);
  cout << "Minimum is " << min << endl;
  cout << "Maximum is " << max << endl;
  cout << "The average is " << avg << endl;
  

  return 0;
}



void math(double array[size],double &min, double &max, double &avg)
{
  min = array[0];
  for(int i = 0; i < size; i++)
    {
      if(array[i] <  min)
	{
	  min = array[i];
	}
    } 

  for(int i = 0; i < size; i++)
    {
      if(array[i] > max)
	{
	  max = array[i];
	}
    }
  double average;
  for(int i = 0; i < size; i++)
    {
      average += array[i];
    }

  avg = average/3;
}

