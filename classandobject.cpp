//  program for creating class and object

#include <iostream>
using namespace std;

class MyClass       //class
{
public:             //access specifier
    int mynum;      //attribute (int varriable)
    string mystring; //attribute (string variable)
};

int main ()
{
MyClass myObj;      //object for myclass class

//access attributes and set values
myObj.mynum=15;
myObj.mystring="Welcome";

//print attribute values
cout <<myObj.mynum << endl;
cout << myObj.mystring <<endl ;
return 0;
}
