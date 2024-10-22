/*3.A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/
#include<iostream>
using namespace std;
int main()
{
    int dispri, bill;
    cout<<"Enter the bill of customer :";
    cin>>bill;
    if(bill>1000)
    {
        dispri=bill-(bill/10);
        cout<<"Dear customer you are given discount by our company because you purchased more than Rs. 1000 grocery: "<<dispri;

    }
    else{
        cout<<"Dear customer ther are no discount at this bill."<<endl;
    }
}