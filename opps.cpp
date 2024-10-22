#include<iostream>
using namespace std;
class customer
{
    string name;
    int acc_num;
    int bal;
    static int total_bal;
    static int total_customer;
    public:
    customer(string name , int acc_num , int bal)
    {
        this->name =name;
        this->acc_num =acc_num;
        this->bal=bal;
        total_customer++;
    }
    void display()
    {
        cout<<"Name : "<< name<<endl<<"Acc_num : "<<acc_num<<endl<<"Total Customer :"<<total_customer<<endl;
    }
    void deposit(int amt)
    {
        if(amt>0)
        {   
            bal+=amt;
            total_bal+=amt;
        }
        else{
            cout<<"Invalid amt";
        }
    }
    static void accessstatic()
    {
        cout<<"Total customer : "<<total_customer<<endl;
        cout<<"Total balance : "<<total_bal<<endl;
    }



    
};
int customer::total_customer=0;
int customer::total_bal=0;
int main()
{
    customer A1("Sudhir" , 2023324890, 23);
    customer A2("MOhit" , 8745823 , 33);
    A1.display();
    A2.display();
    int a; 
    cout<<"Enter your amt: ";
        cin>>a;
    A1.deposit(a);
     customer::accessstatic();
}