/*Print Sum of cube of first n natural number
Print n’th Fibonacci number.

*/
#include<iostream>
using namespace std;
int main()
{
     int n ,i,sum=0;
     cout<<"Enter your natural number at which you want to print the sum of that numbers: ";
     cin>>n;
     for(i=1; i<=n;i=i+1)
     {
        sum=sum+i*i*i;

     }
     cout<<"The sum of the numbers is :"<<sum;
     

}