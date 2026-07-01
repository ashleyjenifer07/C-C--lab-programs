#include<iostream>
#include<string>
using namespace std;

class Student
{
    string name;
    string rollno;
    float marks;

public:
    void getdata()
    {
        cout<<"Enter Student Name: ";
        getline(cin,name);

        cout<<"Enter Roll Number: ";
        getline(cin,rollno);

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"\nStudent Details"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Student s;

    s.getdata();
    s.display();

    return 0;
}