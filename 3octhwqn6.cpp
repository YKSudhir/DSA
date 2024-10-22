//Write a program to convert Octal numbers to binary numbers
#include<iostream>
using namespace std;
int main()
{
    int ans=0, rem, num,mul=1;
cout<<"Enter your octal number which you want you to convert into decimal:";
cin>>num;
while(num>0)
{
    rem=num%10;
    ans = rem*mul+ans;
    num=num/10;
    mul=mul*8;
}
int numm=ans,remm,mull=1,anss=0;
while(numm>0)
{
    remm=numm%2;
    anss=remm*mull+anss;
    numm=numm/2;
    mull=mull*10;
}
cout<<anss;
return 0;

}