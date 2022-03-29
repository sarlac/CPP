// Program to  illustrate all logical operators

#include <iostream>
using namespace std;

int main ()
{
int x,y;
cout << "Enter values of x and y :";
cin >> x >> y;
cout <<"\n X = " << x;
cout << "\n Y = " <<y;

cout << "\n (x>5 && y<4) = " << (x>5 && y<4); // logical operator &&
cout << "\n (x<5 || y>34) =" << (x<5 || y>34);  //logical || operatior
cout << "\n !(x>7 || y>76) =" << (x>7 || y>76);  // logical operator !

return (0);

}
