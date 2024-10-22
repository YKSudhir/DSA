/*
Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
            A
          A B A
        A B C B A
     A B C D C B A
  A B C D E D C B A
 */
#include<iostream>
using namespace std;
int main()
{
    int row , col , n;
    cout<<"Enter the number of rows(n): ";
    cin>>n;
    for( row =1 ; row <= n; row++)
    {
        for ( col =1 ; col<=n-row ; col++){
            cout<<" ";
        }
        for( char name ='A' ; name<='A'+ row - 1 ; name= name+1)
        {
            cout<< name<<"";
        }
        for(char ch=  'A' + row-2 ; ch>='A' ; ch= ch -1)
        {
            cout<<ch<<"";
        }
        cout<<endl;
    }
}
