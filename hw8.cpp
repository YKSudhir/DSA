/*Day 5/180: For Loop in advance
Print char from ‘A’ to ‘Z’ with the help of a for loop.
Print char from ‘Z’ to ‘A’ with the help of a for loop.
There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
Print Sum of square of first n natural number.
Print Sum of cube of first n natural number
Print n’th Fibonacci number.

*/
#include<iostream>
using namespace std;
int main()
{
   char alphabet; 
   cout<<"We are going to print characters from A to Z in uppercase : ";
   for ( alphabet= 'A'; alphabet<='Z'; alphabet=alphabet+1)
   { 
    cout<<alphabet<<" ";
   }

}