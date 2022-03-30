//Program to find factorial of the given number

#include <iostream>
using namespace std;

 int main()
 {
 int n;
 long double factorial=1.0;
 cout << "Enter an integer number";
 cin >> n;

 if(n<0)
    cout << "Factorial of negative number does noot exist !";
 else
 {
     for(int i=1;i<=n;++i)
     {
     factorial=factorial*i;
     }
     cout << "factorial of " << n << "=" << factorial;
 }

 return 0;
 }
