//program to calculate sum of natural numbers using loop

#include <iostream>
using namespace std;

int main()
{
int n,sum=0;

cout << "Enter a positive integer : ";
cin >> n;

for(int i=1;i<=n;++i)
{
     sum +=i;
}
cout << "sum=" <<sum;

return 0;
}
