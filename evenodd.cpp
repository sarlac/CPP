
// program to check whether number is even or odd

#include <iostream>
using namespace std;

int main()
{
int n;
cout << " Enter the integer number : ";
cin >> n;
cout << "\n N=" <<n <<endl;

if(n%2==0)
    cout << n <<" No is Even.";
else
    cout << n <<" No is odd";

return 0;
}
