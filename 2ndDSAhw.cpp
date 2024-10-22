//2: Calculate the average of elements in an array of size 18.
#include<iostream>
using namespace std;
int main()
{
    int avg, arr[18], sum=0;
    cout<<"Enter your numbers:";
    for(int i=0 ; i<18 ; i++)
    {
        cin>>arr[i];
    }
    for( int i=0 ; i < 18 ; i++)
    {
        sum=sum+arr[i];
    }
    avg= sum/18;
    cout<<"Average of the numbers is:"<<avg<<endl;
}