/*Print Sum of cube of first n natural number
Print n’th Fibonacci number.

*/
#include<iostream>
using namespace std;
int main()
{
     int n ,sum;
     cout<<"Enter your natural number at which you want to print the sum of that numbers: ";
     cin>>n;
     sum = ((n*(n+1))/2)*((n*(n+1))/2);
     cout<<"The of given natural number is: "<<sum;
     

}