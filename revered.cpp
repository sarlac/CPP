//program to reverse a number

#include <iostream>
using namespace std;

int main()
{
int n, reversed_number=0, remainder;
cout << "Enter an integer" <<endl;
cin >> n;

while(n!=0)
{
remainder=n%10;
reversed_number=reversed_number*10+remainder;
n=n/10;
}

cout << "Reversed Number = " <<reversed_number <<endl;

return 0;
}
