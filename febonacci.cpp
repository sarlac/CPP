// Program for  febonacci series

#include <iostream>
using namespace std;

int main ()
{
cout << "Febonacci series : Addition of first two numbers become third no in the series 0 1 1 2 3 5 8 13 21 34 ............." << endl;

int x=0;
int y=1;
int limit;

cout << "Please enter the limit of febonacci :";
cin >> limit;
int nextvalue=0;
cout << x << "," << y <<",";

for(int i=0;i<limit;i++)
{
nextvalue=x+y;
cout << nextvalue << ",";
x=y;
y=nextvalue;
}
return (0);
}
