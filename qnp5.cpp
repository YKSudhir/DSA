/*
6.Take input of age of 3 people by user and determine oldest and youngest among them.
age1--Rahul
age2--Ram
age3-- Shiv*/

#include<iostream>
using namespace std;
int main()
{
    int age1,age2,age3;
    cout<<"Enter your age Rahul: ";
    cin>>age1;
    cout<<"Enter your age Ram :";
    cin>>age2;
    cout<<"Enter your age Shiv :";
    cin>>age3;
    if(age1>age2 && age1> age3)
    {
        cout<<"Rahul is elder than Ram and Shiv.";
    }
    else if(age2>age1 && age2>age3)
    {
        cout<<"Rma is elder than Rahul and Shiv.";
    }
    else
    {
        cout<<"Shiv is elder than Rahul and Shiv.";
    }
    if(age1<age2 && age1< age3)
    {
        cout<<"And Rahul is younger than Ram and Shiv.";
    }
    else if(age2<age1 && age2<age3)
    {
        cout<<"And Rma is younger than Rahul and Shiv.";
    }
    else
    {
        cout<<"And Shiv is younger than Rahul and Shiv.";
    }
    if(age1>100 || age2>100 || age3>100)
    {
        cout<<"Invalid age";
    }
}