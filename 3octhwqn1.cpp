//Write a program to convert binary numbers to decimal numbers using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int num,rem,ans=0,mul=1;
    cout<<"Enter your binary number of which you want to convert into decimal(num):";
    cin>>num;
    for(; num>0; num=num/10)
    {
        rem=num%10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
cout<<ans<<" ";
}
//101010s