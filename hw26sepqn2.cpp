/*
Second Pattern:
    A
    A B
    A B C
    A B C D
    A B C D E
     */
#include<iostream>
using namespace std;
int main()
{
int row ,col,n;
cout<<"Enter your col to print pattern:";
cin>>n;
for(row=1 ; row<=n;row=row+1)
{
    
    for(col=1;col<=row;col=col+1)
    {
        char name = 'A'+(col-1);
        cout<<name<<" ";
    }
    cout<<endl;
}
}