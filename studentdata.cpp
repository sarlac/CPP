/* Create a class 'Student' with three data members which are name, age and address.
The constructor of the class assigns default values to name as "unknown", age as '0'
and address as "not available". It has two functions with the same name 'setInfo'.
First function has two parameters for name and age and assigns the same whereas the
second function takes has three parameters which are assigned to name, age and address
 respectively. Print the name, age and address of 10 students.*/

 #include <iostream>
 #include <string>
 using namespace std;

 class student
 {
 string name;
 int age;
 string address;
 public:
     student()
     {
         name="unknown";
         age=0;
         address="not available";
     }
    SetInfo(string n, int a)
    {
      name=n;
      age=a;
      cout << "Name of student is " <<name << endl;
      cout << "Age of the student is " << age << endl;
      cout << "\n";
    }
    SetInfo(string nm, int ag, string add)
    {
        name=nm;
        age=ag;
        address=add;
        cout << "Name of student : " <<name << endl;
        cout << "Age of the student : " << age << endl;
        cout << "Address of the student : " << address << endl;
    }

 };

 int main()
 {
int age;
int i=10;
string name,address;
student stud[i];
stud[i].SetInfo("sarla",35);

for(i=0;i<10;i++)
{
cout <<"\n";
cin >> name >>age >>address;
stud[i].SetInfo(name,age,address);
}

 return 0;
 }
