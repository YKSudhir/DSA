#include<iostream>
using namespace std;
int mul(int arr[],int index , int n)
{
    if(index ==n)
    return 1;
    return arr[index]*mul(arr,index+1,n);

}
int main()
{
    int arr[4]={1,2,3,4};
    cout<<mul(arr,0,4);
    
}
