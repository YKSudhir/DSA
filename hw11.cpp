/*Print Sum of square of first n natural number.
Print Sum of cube of first n natural number
Print n’th Fibonacci number.

*/
#include<iostream>
using namespace std;
int main()
{
    int n, sum=0,i;
cout<<"Enter your natural number at which you want to print the squares of your natural numbers :";
cin>>n;
for( i=1; i<=n; i=i+1)
{
    sum=sum+ i*i;
}
cout<<sum;
}