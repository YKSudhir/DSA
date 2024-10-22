// // Day 25/180 Selection Sort in C++
// // 1: Selection Sort Algorithm to sort the array of integers in decreasing order.
// // 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 
// // 3: Selection Sort Algorithm to sort the array of char in ascending order.
#include<iostream>
 using namespace std;
 int main()
 {
 int n;
 int index;
     cout<<"enter the number of array:";
     cin>>n;
 int arr[n];
 cout<<"Enter the element of the array:";
 for(int i=0 ; i <n ; i++){
     cin>>arr[i];
 }
// for(int i =0 ; i< n-1; i++){
//     index=i;
//     for( int j =i+1 ; j< n; j++){
//         if ( arr[j]< arr[index])
//         index=j;
//     }
//     swap(arr[index],arr[i])

// }
// for(int i=0 ; i<n ; i++)
// {
//     cout<<arr[i]<<" ";
//     }
// }
for ( int i =0 ; i<n-1; i++)
{
    for(int j =i+1 ;j<n ; j++){
        int temp = arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
}
 for( int i=0 ; i <n ; i++)
 {
    cout<<arr[i]<< " ";
 }cout<<endl;
}



























