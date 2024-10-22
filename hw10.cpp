/*There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
Print Sum of square of first n natural number.
Print Sum of cube of first n natural number
Print n’th Fibonacci number.

*/
#include<iostream>
using namespace std;
int main()
{
    int i,a,l,d;
    cout<<"Enter your first term of your AP: ";
    cin>>a;
    cout<<"Enter your last term of your Ap :";
    cin>>l;
    cout<<"Enter your comman difference of your AP :";
    cin>>d;
    
if(a<l) 
{
    cout<<"Your corresponding AP is: ";
    for( i=a; i<l; i=i+d)
    {
        cout<<i<<" ";

    }
}
else{
    cout<<"Invalid input";
}

}