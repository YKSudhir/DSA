//arrange the element of array in ascending order
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length og array:";
    cin>>n;
    int arr[n];
    cout<<"enter your element:";
    for( int i=0 ; i<n; i++)
    cin>>arr[i];
        for(int  i = n-2 ; i>=0 ; i--)
        {
            bool swapped=0;
            for(int j=0 ; j<=1 ; j++)
            {
                if(arr[j]<arr[j+1])
                {
                    swapped=1;
                    swap(arr[j],arr[j+1])
                }
            }
            if (swapped==0)
            break;
        }
for( int i=0 ; i< n ; i++)
cout<<arr[i]<<" ";
}