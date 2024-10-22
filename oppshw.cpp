//  Day 99/180 Object Oriented Programming

// 3 Programming Challenges with Classes:
// 1. Bank Customer Class:
// Challenge: Design a Customer class for a bank system that manages customer information and basic operations.
// Attributes:
// name: String containing the customer's full name.
// accountNumber: Unique integer identifying the customer's account.
// accountBalance: Double representing the current balance in the account.
// isActive: Boolean indicating whether the account is active.
#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_number;
    int account_balance;
    bool is_active;
    public:
      void getname(string s)
    {
        name=s;
    }
    void getaccount_number(int n)
    {
        account_number=n;
    }
     void getaccount_balance(int b)
    {
        account_balance=b;
    }
       void getis_active(bool n)
    {
        is_active=n;
    }
       void givename()
    {
        cout<<name<<endl;
    }
    void giveaccount_number()
    {
        cout<<account_number<<endl;
    }
     void giveaccount_balance()
    {
        cout<<account_balance<<endl;
    }
       void giveis_active()
    {
        cout<<is_active<<endl;
    }

};
int main()
{
    customer *c1 = new customer;
    c1->getname("Sudhir");
    c1->getaccount_number(2013232);
    c1->getaccount_balance(32132);
    c1->getis_active(1);
    c1->givename();
    c1->giveaccount_number();
    c1->giveaccount_balance();
    c1->giveis_active();
}