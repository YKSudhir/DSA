//2: Given a Matrix of size n*m (n=rows and m= cols). Reverse each column of the matrix.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n , m;
    cout<<"enter the value of n, m respectively:"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the value of arr:"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
for(int j=0; j<m; j++)
{
    int start=0 ,end = m-1;
    if(start<end){
      swap(arr[j][start],arr[j][end]);
      start++,end--;
    }
}
for(int i=0 ; i<n ;i++){
    for(int j =0 ; j<m ; j++)
    {
        cout<<arr[i][j];
    }

}


}
