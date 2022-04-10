/*Create a class named 'PrintNumber' to print various numbers of
different datatypes by creating different methods with the same name
'printn' having a parameter for each datatype.*/

#include <iostream>
using namespace std;

class PrintNumber
{
public:
    void printn(int n)
    {
        cout << "integer type : " <<n <<endl;
    }
    void printn(float n)
    {
        cout << "float type : " <<n <<endl;
    }
    void printn(double n)
    {
        cout << "double type : " <<n <<endl;
    }
    void printn(string n)
    {
        cout << "string type : " <<n <<endl;
    }
    void printn(char n)
    {
        cout << "Character type : " <<n <<endl;
    }

};

int main()
{
PrintNumber obj;
obj.printn(7);
obj.printn(5.2);
obj.printn(6.3);
obj.printn("hello");
obj.printn('s');

return 0;
}
