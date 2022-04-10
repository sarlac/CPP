//program to implement constructor

#include<iostream>
using namespace std;

class car
{
public:
    string brand;
    string model;
    int year;
    car(string x, string y, int z);
};
car::car(string x, string y, int z)
    {
       brand=x;
       model=y;
       year=z;
    }
int main()
{
    car obj1("bmw","x5",1999);

    cout << obj1.brand << "  " << obj1.model << "  " << obj1.year;
    return 0;
}
