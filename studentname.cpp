//Program to print the names of students by creating a Student class.
//If no name is passed while creating an object of the Student class, then the name should be "Unknown",
//otherwise the name should be equal to the String value passed while creating the object of the Student class.

#include <iostream>
#include <string>
using namespace std;

class student
{
string name;
public:
string student1(string s)
{
name=s;
cout << "Name : " <<name<<endl;
return name;
}
string student2()
{
name="unknown";
cout << "Name :" <<name<<endl;
return name;
}
};

int main()
{
student stud;
stud.student1("sarla");
stud.student2();

return 0;
}
