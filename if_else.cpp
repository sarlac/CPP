//program to check whether an integer is positive , negative or zero

#include <iostream>
using namespace std;

int main ()
{
int number;

cout <<" Enter an integer number :";
cin >> number;
//cout <<"Number= " <<number << endl;

if(number>0)
    cout << "Number is positive ";
else if(number<0)
    cout << "Number is negative ";
else
    cout << "Number is zero " << endl;


    return 0;
}
