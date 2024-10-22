// 5: Find the second largest element in an array of unique elements of size n. Where n>3.
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"\nEnter the element of the array:"<<endl;
    for(int i=0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    int ans= -10000;
    for( int i = 0 ; i < size ; i++)
    
    {
        if(arr[i]>ans)
        ans=arr[i];
}
//secong greatest element
int second=-10000;
for( int i =0 ; i< size ;i++)
{
    if(arr[i]!=ans)
    {
        second=max(second,arr[i]);
    }
}
cout<<"The second largest number is:"<<second;

}