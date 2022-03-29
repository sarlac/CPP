// Program for the ternary operator

#include <iostream>
using namespace std;

int main()
{
int x,y,z;
cout << "Enter Value of x :";
cin >> x;
cout << "\n Enter value of y :";
cin >> y;
cout << "\n Enter value of z :";
cin >> z;
cout << "\n X =" <<x << "\n Y =" << y << "\n Z=" << z << "\n";

//variable= (condition)? true value:false value
string output = (x<y)?(y>z)? "y is greatest number" : "Z is greatest number" : "X is greatest number";
cout << "\n" << output;

return (0);
}
