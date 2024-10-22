/*1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.*/
//using while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of number at which you want to print even numbers.";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }

}
//using do while loop
