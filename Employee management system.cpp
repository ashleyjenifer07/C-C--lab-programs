#include<iostream>
#include<string>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    void getdata()
    {
        cout<<"Enter Employee ID: ";
        cin>>id;
        cin.ignore();

        cout<<"Enter Employee Name: ";
        getline(cin,name);

        cout<<"Enter Salary: ";
        cin>>salary;
    }

    void display()
    {
        cout<<"\nEmployee Details"<<endl;
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    Employee e;

    e.getdata();
    e.display();

    return 0;
}