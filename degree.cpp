/* Create a class 'Degree' having a function 'getDegree' that prints "I got a degree". It has two
subclasses namely 'Undergraduate' and 'Postgraduate' each having a function with the same name
that prints "I am an Undergraduate" and "I am a Postgraduate" respectively. Call the function by
creating an object of each of the three classes.*/

#include <iostream>
using namespace std;

class degree
{
public:
  void getdegree()
    {
        cout << "I got a degree" <<endl;
    }

};
class undergraduate:public degree
{
    public:
void print()
{
    cout<<"I am an Undergraduate" <<endl;
}

};
class postgraduate:public degree
{
    public:
void print()
{
    cout<<"I am an postgraduate" <<endl;
}

};

int main()
{
degree d;
d.getdegree();

undergraduate u;
u.print();

postgraduate p;
p.print();

return 0;
}
