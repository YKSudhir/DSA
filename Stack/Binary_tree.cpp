#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int sum1 = 0 ;
    int sum2 = 0 ;
    for(int i =0 ; i<n-1 ; i++)
    {
        sum1 = sum1+arr[i];
        sum2 = 0;
        for(int j = i+1 ; j<n ; j++)
        {
            sum2 = sum2+arr[j];
        }
        if(sum1==sum2)
            {
            cout<<i<<endl;
            break;
            }
    }
if(sum1!=sum2)
{
    cout<<"0"<<endl;
}
return 0;
}