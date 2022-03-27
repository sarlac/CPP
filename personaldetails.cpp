//Program to display your personal details like name, age, address, phone number, blood group, gender and print it with proper message_size

#include <iostream>
#include <string>
using namespace std;

int main()
{
string myname = "Sarla";
cout << "\n My Name :" << myname;

int x;
cout << "\n";
cin >> x;
cout <<"\n My Age :" << x;

string address = "Wagholi, Pune";
cout << "\n Address :" << address;

string pnumber= "7028917404";
cout << " Phone number :" << pnumber;

char Bg;
cin >> Bg;
cout << " \n Blood Group" << Bg;

string gender = "Female";
cout << "\n Gender :" << gender;

return (0);
}
