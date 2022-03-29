//Program for switch case

#include <iostream>
using namespace std;

int main()
{
int day;
cout <<" Please enter value for getting day :" << endl;
cin >> day;

switch(day)
{
case 1: cout << "Monday" << endl;
        cout << "Day 1" <<endl;
        break;

case 2:cout << "Tuesday" <<endl;
        cout << "Day 2" <<endl;
        break;

case 3:cout << "Wedensday" << endl;
        cout << "Day 3" <<endl;
        break;

case 4: cout<< "Thurday" <<endl;
        cout << "Day 4" << endl;
        break;

case 5: cout << "Friday" << endl;
        cout << "Day 5" << endl;
        break;

case 6: cout << "Saturday" << endl;
        cout << "Day 6" <<endl;
        break;

case 7: cout << "Sunday" << endl;
        cout << "Day 7" << endl;
        break;

case 8: cout << "Invalid choice" <<endl;
        cout << "Day 8" <<endl;
        break;

}
return (0);
}
