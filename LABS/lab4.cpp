#include <iostream>
using namespace std;

int main()
{
  int x = 0;
  cout << "Please Enter an Integer: ";
  cin >> x;

  
  if(x <= 100 && x >= -100)
    {
      cout << "It is beween -100 and 100! " << endl;
    }
  else
    {
      cout << "Your number is not in beween -100 and 100 " << endl;
    }

  





  if ( x % 2 == 0 )
    {
      if ( x == 0)
	{
	  cout << "Your number is not divisible by 3 and 5" << endl;
	}
      else if( x % 5 == 0 && x % 3 == 0)
	{
	  cout << "Your number is divisible by 3 and 5" << endl;
	}
      else
	{
	  cout << "Your number is not divisible by 3 and 5" << endl;
	}

	  

    }
   
      else 
	{
	  if(x < 0 )
	    {
	      cout <<  "Your number is odd and a negative " << endl;
	    }
	  else
	    {
	      cout <<  "Your number is odd " << endl;
	    }
	}


   
}









