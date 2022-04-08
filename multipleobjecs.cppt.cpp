//  program for creating class and object

#include <iostream>
using namespace std;

class MyClass           //class
{
public:                  //access specifier
    int mynum;          //attribute (int variable)
    string mystring;     //attribute (string variable)
    string myname;      //attribute (string variable)
};

int main ()
{
MyClass myObj1;      //object for myclass class

//access attributes and set values
myObj1.mynum=15;
myObj1.mystring="Welcome";
myObj1.myname="sarla";

//print attribute values
cout << myObj1.mynum << endl;
cout << myObj1.mystring <<endl;
cout << myObj1.myname << endl;

//create an second object for class myclass
MyClass myObj2;

myObj2.mynum= 25;
myObj2.mystring ="second objects";
myObj2.myname="Chimegawe";

//print values of the object
cout << myObj2.mynum <<endl;
cout << myObj2.mystring <<endl;
cout << myObj2.myname <<endl;

return 0;
}
