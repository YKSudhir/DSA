/*Write a program to convert Octal numbers to decimal numbers.*/
#include<iostream>
using namespace std;
int main()
{
    int ans=0, rem, num,mul=1;
cout<<"Enter your octal number which you want you to convert into decimal:";
cin>>num;
num=num;
while(num>0)
{
    rem=num%10;
    ans = rem*mul+ans;
    num=num/10;
    mul=mul*8;
}
cout<<ans;
return 0;
}