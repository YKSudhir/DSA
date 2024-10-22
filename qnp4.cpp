/*
5. A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.*/
#include<iostream>
using namespace std;
int main()
{
    int percentage;
    cout<<"Dear student please enter your percentage of overall marks to know your Grades: ";
    cin>>percentage;
    if(percentage>100)
    {
        cout<<"Invlid input percentage";
    }
    else if(percentage<25)
    {
        cout<<"Grade-F";
    }
    else if(percentage>=25 && percentage<45)
    {
        cout<<"Grade-E";

    }
    else if (percentage>=45 && percentage<50)
    {
        cout<<"Grade-D";
    }
    else if (percentage>=50 && percentage<60){
        cout<<"Grade-C";
    }
    else if(percentage>=60 && percentage<80) 
    {
        cout<<"Grade-B";
    }
    else if (percentage>=80)
    {
        cout<<"Grade-A";
    }
}