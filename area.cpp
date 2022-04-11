/* program to Create a class to print the area of a square and a rectangle. The class has two functions with the
same name but different number of parameters. The function for printing the area of rectangle has two
parameters which are its length and breadth respectively while the other function for printing the area
of square has one parameter which is the side of the square.*/

#include <iostream>
using namespace std;

class Area
{
int length,breadth,side;
public:
    void area(int x)
    {
        side=x;
        cout << "Area of the square = "<< side*side <<endl;
    }
    void area(int y, int z)
    {
        length=y;
        breadth=z;
        cout << "Area of the rectangle = " << length*breadth <<endl;
    }

};

int main ()
{
Area obj;
obj.area(5);
obj.area(4,6);

return 0;
}
