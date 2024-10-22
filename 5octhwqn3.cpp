//3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
//b=a c=b  a=c
#include<iostream>
using namespace std;
void  swap(int &a, int &b, int &c)
{
   int temp =a;
   a=c;
   c=b;
   b=temp;
}
int main()
{
int a,b,c;
cout<<"Enter the values of a,b and c respectively:";
cin>>a>>b>>c;
swap(a,b,c);
cout<<"Now the value of a is:"<<a<<"\n Value of b is:"<<b<<"Value of c is:"<<c;
return 0;
}