/*
First Pattern:
    1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5 
     1 2 3 4 5 6 
     1 2 3 4 5 6
*/
#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter the col for pattern:";
    cin>>n;
    for(row=1 ;row<=n; row=row+1)
    {
        for(col=1;col<=row;col=col+1)
        {
            cout<<col<<" ";

        }
        cout<<endl;
    }
}