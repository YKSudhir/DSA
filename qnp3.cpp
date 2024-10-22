/*4.A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/

#include<iostream>
using namespace std;
int main()
{
    int salery,working_years;
    cout<<"Please enter your salery: ";
    cin>>salery;
    cout<<"Please enter your year of service: ";
    cin>>working_years;
    if(working_years>5)
    {
        salery = ((salery*5)/100)+ salery;
        cout<<"Congralutation! you are getting bonous of 5 % on your salery with your current salery . Now your net salery is :"<<salery;
    }
    else{
        cout<<"Better luck! Try next time.";
    }
}