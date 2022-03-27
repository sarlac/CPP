//Program to take details from command prompt and display your personal details like name, age, address, phone number, blood group, gender and print it with proper message_size

#include <iostream>
#include <string>
using namespace std;

int main()
{
string myname;
cout << "Type your name: ";
cin >> myname;
cout << "\n My Name :" << myname;

int x;
cout << "\n Type your age: ";
cin >> x;
cout <<"\n My Age :" << x;

string address;
cout <<" \n Type your address: ";
cin >> address;
cout << "\n My Address :" << address;

string pnumber;
cout << " \n Type your phone number :";
cin >> pnumber;
cout << "\n Phone number :" << pnumber;

string Bg;
cout <<"\n Enter Blood Group :";
cin >> Bg;
cout << " \n Blood Group :" << Bg;

string gender;
cout << "\n Type your gender :";
cin >> gender;
cout << "\n Gender :" << gender;

return (0);
}
