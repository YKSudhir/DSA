// Sort an array in non-increasing order using quick Sort
#include<iostream>
#include<vector>
using namespace std;
int partition( int arr[] , int start , int end)
{
    int pos = start;
    for ( int i =start ; i <= end ; i++)
    {
        if ( arr[i] >= arr[end])
        {
            swap( arr[i], arr[pos]);
            pos++;


        }

    }
    return pos-1;
}
void quicksort( int arr[] , int start , int end)
{
    if ( start >= end)
    return ;
    int pivot = partition( arr , start , end);
    //left
    quicksort( arr , start , pivot-1);
    //right 
    quicksort( arr , pivot+1, end);

}



int main()
{
   int arr[] = {6,3,1,2,8,9,10,7,3,10};
   quicksort(arr,0,9);
   for(int i=0;i<10;i++)
   cout<<arr[i]<<" ";
 return 0;

}
