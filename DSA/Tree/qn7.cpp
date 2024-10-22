#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int>arr;
    arr={1,2,2,3,3,4};

    for ( int i = 0 ; i<arr.size() ; i++)
    {
        for( int j=i+1 ; j<arr.size()-1 ; j++)
        {
            if(arr[i]==arr[j])
            {
                for( int k=j ; k<arr.size()-1 ; k++)
                {
                     arr[k]=arr[k+1];   
                        
                }
                arr.pop_back();
                j--;
                
            }
        }
    }
    // int b =arr.size();
    for ( int i = 0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
}