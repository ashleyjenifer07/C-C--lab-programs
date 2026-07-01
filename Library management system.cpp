#include<iostream>
#include<string>
using namespace std;

class Library
{
    string book;

public:
    void getbook()
    {
        cout<<"Enter Book Name: ";
        getline(cin,book);
    }

    void issuebook()
    {
        cout<<"\nBook Issued Successfully"<<endl;
        cout<<"Book Name: "<<book<<endl;
    }
};

int main()
{
    Library l;

    l.getbook();
    l.issuebook();

    return 0;
}