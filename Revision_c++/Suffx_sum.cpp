#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int sum = 0;
    vector<int>arr={1,2,3,4,5};


    for( int i= arr.size()-1 ; i>=0 ; i--)
    {
        sum+=arr[i];
        arr[i] = sum;
    }
    for(int i = 0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
}