/*
2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number:";
    cin>>num;
    if( num%2==0 && num>0)
    cout<<"Your number is positive or even.";
    else
    cout<<"Your number is not satisfying the above case.";
}
