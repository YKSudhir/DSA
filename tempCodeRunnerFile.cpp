#include<iostream>
using namespace std;
int main()
{
    int t , k , n;
    cin>>t>>n>>k;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    while(t--)
    {
        if(k<=1)
        {
            for(int i=0 ; i<n-1 ; i++)
            {
                if(arr[i]>arr[i+1])
                {
                    cout<<"NO";
                }
            }
        }
        else
        {
            cout<<"YES";
        }
    }
}