#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int row  = n;
    for( int i =1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=((n-(2*i-1)/2)) ; j++)
        {
            cout<<" ";
        }
        for(int j=1  ; j<=(2*i-1) ; j++)
        {
            if(row==n)
            {
                 cout<<" "<<row;
            }
            if(row!=n)
            {
                cout<<row<<" ";
            }
           
        }
        cout<<endl;
        row = row-1;
    }
}