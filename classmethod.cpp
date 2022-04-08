//program for implementing class methods-inside and outside class

#include <iostream>
using namespace std;

class myclass           //class
{
public:                 //access specifier
void mymethodout();
void mymethodin()         //method/function defined inside the class
{
cout << "This is method/function defined inside the class." <<endl;
}
};

//method/function defined outside the class
void myclass::mymethodout()
{
cout << "This is method defined outside the class." <<endl;
}

int main()
{
myclass myobj;          //created object for class myclass
myobj.mymethodin();       // call the method
myobj.mymethodout();
return 0;
}
