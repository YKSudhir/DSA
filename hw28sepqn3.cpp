/*Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

            *
           *  *
         *  *  *
       *  *  *  *
     *  *  *  *  *
     *  *  *  *  *
      *  *  *  *
        *  *  *  
          *  *  
           *
           * */
#include<iostream>
using namespace std;
int main()
{
    int row , col ,n ;
    cout<<"Enter the even number of rows(n):";
    cin>>n;
    for(row=1 ; row<=n/2; row++)
    {
        for(col=1 ; col<=n/2-row ; col= col+1)
        {
            cout<<" ";
        }
        for(col=1; col<=row ; col= col+1)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
    for(row=n/2 ; row >=1; row--)
    {
        for(col= 1 ; col<= n/2 -row ; col++)
        {
            cout<<" ";
        }
        for(col=1 ; col<=row ; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    }