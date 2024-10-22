// Day 78/180 Recursion in Arrays 
// 1: Find the Maximum element in a given array of size N.
// 2: Find the Product of all elements in a given array of size N.
// 3: Find the Number of even elements in a given array of size N.
#include<iostream>
using namespace std;
int maxele(int arr[] , int index , int n )
{
    if (index==n-1)
    {
        return arr[index];
    }
    return max(arr[index],maxele(arr,index+1 ,n));
}
int main()
{
    int arr[4]={1,2,3,4};
    cout<<maxele(arr,0,4);
    
}
// int max(int arr[] ,int index, int n)
// {   
//     int maxele=arr[index];
//     if(index==n)
//     {
//         return maxele;
//     }
    
//     if(arr[index+1]>maxele)
//     {
//         maxele=arr[index+1];
//     }
//     return max( arr ,index+1,  n);
// }
