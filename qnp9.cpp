/*

Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter you character to know whether it is in lower case or upper case :";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"Your entered character is in lower case.";
    }
    else if(ch>='A' &&  ch<='Z')
    {
cout<<"Youur enterd character is in upper case.";
    }
    else{
        cout<<"Invalid Input.";
    }


}