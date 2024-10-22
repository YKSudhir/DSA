// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    char arr[size];
    cout<<"\nEnter the element of the array:"<<endl;
    for(int i=0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    cout<<"The element of array are:"<<endl;
    for( int i =0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }


}