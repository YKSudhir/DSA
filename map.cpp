#include<iostream>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    for(int p =0 ; p<t ;p++)
    {
    int k , n;
    cin>>n>>k;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
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