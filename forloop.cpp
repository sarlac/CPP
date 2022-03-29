// Program for for loop

#include <iostream>
using namespace std;

int main ()
{
int i=2;
cout << "\n\nTable of 2 \n";
while(i<=20)
{
cout << i <<endl;
i=i+2;
}
cout << "\n\nTable of 4 \n";
int y=4;
for(int x=1;x<=10;x++)
{
//cout << x << "*" <<y << "=" << x*y << "\n";
cout << x*y <<endl;
}
return (0);
}
