/*
8.A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
#include<iostream>
using namespace std;
int main()
{
    int classes_held,classes_attended,percentage_attendence;
    cout<<"Enter number of you have attended:";
    cin>>classes_attended;
    cout<<"Enter number of classes held in college:";
    cin>>classes_held;
    percentage_attendence=(classes_attended*100)/classes_held;
    cout<<"The percentage attendence of your attended classes:"<<percentage_attendence<<"%"<<endl;
    if(percentage_attendence>=75)
    {
        cout<<"You are allowed to sit in the exam";
    }
    else{
        cout<<"You are not allowed to sit in exams.";
    }
}