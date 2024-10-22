// // 2: Given an array of size N, Print subset sum and corresponding to it, print the given subset also.
// // Ex: arr[1,2]
// // output:
// // Sum Subset
// // 1        1
// // 2        2
// // 3       1 2


// #include<iostream>
// #include<vector>
// using namespace std;
// void subsetsum_with_arr( vector<int>&arr , vector<vector<int> >&ans , int N , int index , int sum , vector<int>&temp)
// {
//     if( index ==N)
//     {
//        cout<<ans.push_back( sum,     temp)<<endl;
        
//     }



//     //element not included
//     subsetsum_with_arr( arr , ans ,  N ,  index+1 , sum ,  temp);
//     temp.pop_back();
//     //element included
//     subsetsum_with_arr( arr , ans ,  N ,  index+1 , sum+arr[index] ,  temp.push_back(arr[index]));
//     temp.pop_back();
// {
// int main()
// {
//     vector<int>arr;
//     int N;
//     cout<<"Enter you array size:"<<endl;
//     cin>>N;
//     cout<<"Enter your element of array:"<<endl;
//     for( int i=0 ; i<N ; i++)
//     {
//         cin<<arr[i];
//     }
//    subsetsum_with_arr( arr , ans , N ,  index , sum , temp);
  

// }
#include<iostream>
#include<vector>
using namespace std;

void subsetsum_with_arr(vector<int>& arr, vector<vector<int>>& ans, int N, int index, int sum, vector<int>& temp)
{
    if (index == N)
    {
        // Print the subset sum and corresponding subset
        cout << sum << "    ";
        for (int i : temp)
        {
            cout << i << " ";
        }
        cout << endl;3

        // Save the subset in the ans vector
        
        return;
    }

    // element not included
    subsetsum_with_arr(arr, ans, N, index + 1, sum, temp);

    // element included
    temp.push_back(arr[index]);
    subsetsum_with_arr(arr, ans, N, index + 1, sum + arr[index], temp);
    temp.pop_back();
}

int main()
{
    vector<int> arr;
    vector<vector<int>> ans; // to store subsets
    int N;

    cout << "Enter your array size:" << endl;
    cin >> N;

    cout << "Enter your elements of the array:" << endl;
    for (int i = 0; i < N; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    vector<int> temp; // temporary vector to store subsets
    subsetsum_with_arr(arr, ans, N, 0, 0, temp);

    return 0;
}

    
