#include<iostream>
#include<string>
using namespace std;

class Bank
{
    string name;
    int accno;
    float balance;

public:
    void getdata()
    {
        cout<<"Enter Account Holder Name: ";
        getline(cin,name);

        cout<<"Enter Account Number: ";
        cin>>accno;

        cout<<"Enter Initial Balance: ";
        cin>>balance;
    }

    void deposit()
    {
        float amount;
        cout<<"\nEnter Amount to Deposit: ";
        cin>>amount;

        balance = balance + amount;
    }

    void withdraw()
    {
        float amount;
        cout<<"Enter Amount to Withdraw: ";
        cin>>amount;

        if(amount<=balance)
        {
            balance = balance - amount;
            cout<<"Withdrawal Successful"<<endl;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }

    void display()
    {
        cout<<"\nAccount Details"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main()
{
    Bank b;

    b.getdata();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}