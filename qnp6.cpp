/*
7.Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    
        cout<<"Enter your number:";
        cin>>num;
        if(num<0)
        {
            num= num*(-1);
        }
        else{
        num = num*1;
        }
        cout<<"The absolute value of your enterd number is:"<<num; 

}