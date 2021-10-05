#include <iostream>

using namespace std;
int fib(int n);

int main()
{

  int a;
  cout << "a = ";
  cin>>a;

  cout << endl << "From recursive function" << endl;
    cout << fib(a) << endl;
  cout << endl;

}


 int fib(int n)
  {
    if(n<=0) return 0;
    else if(n==1) return 1;
    else return fib(n-1)+fib(n-2);  
  }

