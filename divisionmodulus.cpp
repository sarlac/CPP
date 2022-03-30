// Program to fid quotient and remainder

#include <iostream>
using namespace std;

int main()
{
int divisor, divident, quotient, remainder;

cout << "\n Enter Divident :";
cin >> divident;

cout << "\n Enter Divisor: ";
cin >> divisor;

quotient=divident/divisor;
remainder=divident%divisor;

cout <<"\n Quotient = " <<quotient;
cout << "\n Remainder = "<<remainder;
cout << "\n";

return 0;
}
