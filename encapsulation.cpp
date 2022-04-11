//program to implement encapsulation

#include <iostream>
using namespace std;

class employee
{
    int salary;
public:
    void setsalary(int s)
    {
        salary=s;
    }
    int getsalary()
    {
    cout << "Salary = " << salary<<endl;
    return salary;
    }
};

int main()
{
employee obj;
obj.setsalary(50000);
obj.getsalary();

return 0;
}
