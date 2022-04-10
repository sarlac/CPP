/* 2.Create a class named 'Rectangle' with two data members- length and breadth and a function to
calculate the area which is 'length*breadth'.
The class has three constructors which are :
1 - having no parameter - values of both length and breadth are assigned zero.
2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
3 - having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.*/

  #include <iostream>
  using namespace std;

class rectangle
{
    int length;
    int breadth;

public:
    rectangle()
    {
        int length=0;
        int breadth=0;
    }
public:
    rectangle(int x)
    {
        length=x;
        breadth=8;

    }
public:
    rectangle(int x, int y)
    {
        length=x;
        breadth=y;
    }
public:
    void area()
    {
        cout << "Area = " << length*breadth << "\n";
    }
};


int main()
{
    rectangle obj1;
    rectangle obj2(5);
    rectangle obj3(2,5);
    obj1.area();
    obj2.area();
    obj3.area();
    return 0;
}
