/*Print Sum of square of first n natural number.
Print Sum of cube of first n natural number
Print n’th Fibonacci number.

*/
#include<iostream>
using namespace std;
int main()
{
    int sum,n;
    cout<<"Enter your natural number at which you wnat to print sum :";
    cin>>n;
    sum=(n*(n+1)*(2*n+1))/6;
    cout<<"The sum the given natural numbers is :"<<sum;
    
    
}