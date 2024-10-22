// main  qns : Write a program to convert binary to Octal numbers
#include<iostream>
using namespace std;
int main()
{
    int num,rem,ans=0,mul=1;
    cout<<"Enter your binary number of which you want to convert into octal:";
    cin>>num;
    for(; num>0; num=num/10)
    {
        rem=num%10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    int numm=ans,remm,anss=0,mull=1;
     while (numm> 0) {
        remm=numm % 8;
       
anss= remm * mull + anss;
 numm= numm/ 8;
        mull = mull * 10;
    }

    // Display the octal number
    cout << "Octal number: " << anss;
    return 0;


}
//101010s