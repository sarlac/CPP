  /* program to Create a class to print an integer and a character using two functions having the
same name but different sequence of the integer and the character parameters.
For example, if the parameters of the first function are of the form (int n, char c),
then that of the second function will be of the form (char c, int n).*/

#include <iostream>
using namespace std;

class sequence
{
public:
    void prints(int n,char c)
    {
        cout << " integer " << n << " then " << " character " << c << endl;
    }
    void prints(char c,int n)
    {
        cout << " character " << c << " then " << " integer " << n << endl;
    }
};

int main()
{
sequence obj;
obj.prints(5,'d');
obj.prints('d',8);

return 0;
}
