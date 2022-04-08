//program for implementing class methods-inside and outside class

#include <iostream>
using namespace std;

class car           //class
{
public:                 //access specifier
int speed1(int maxspeed1);        //method defined outside
int speed2(int maxspeed2)         //method/function defined inside the class
{
cout << "maxspeed of the car is :" << maxspeed2 << endl;
return maxspeed2;
}

};

//method/function defined outside the class
int car::speed1(int maxspeed1)
{
cout << "maxspeed of the car is :" << maxspeed1 <<endl;
return maxspeed1;
}

int main()
{
car myobj;          //created object for class myclass
myobj.speed1(100);       // call the method
myobj.speed2(200);
return 0;
}
