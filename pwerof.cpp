//program to find power of a number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float base, exponent,result;
cout << "Enter the base and exponent simultaneously :";
cin >> base >> exponent;

result=pow(base, exponent);

cout << base << "^" << exponent << "=" << result;

return 0;
}
