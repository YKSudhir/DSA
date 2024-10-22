#include<iostream>
using namespace std;
class customer 
{
    string name;
    int bal;
    int ac;

    public:
//default constructor
customer()
{
    cout<<"It is constructor:"<<endl;
    name="Sudhir";
    bal=23;
    ac=27;
   
}
//parameterised constructor
customer(string a, int b , int c)
{
    name=a ;
    bal=b;
    ac=c;
}
customer(string a, int b )
{
    name=a ;
    bal=b;
   
}
 customer(customer(&B))
 {
    name=B.name;
    bal=B.bal;
    ac=B.ac;
 }
 void display()
{
    cout<<name<<endl<<bal<<endl<<ac<<endl;
}


};





int main()
{
    customer A1;
    customer A2("Rohit", 23 , 27);
    customer A3("Mohit",25);
    A1.display();
    A2.display();
    A3.display();
    customer A4(A3);
    A4.display();
    customer A5;
    A5=A4;
    A5.display();

}