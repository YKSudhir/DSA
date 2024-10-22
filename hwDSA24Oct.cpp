// /* Day 37/180 Vector in C++
// Prove that the average time Complexity of Push_back operation in Vector is O(1) time.
// How to find the number of Occurance of an element in a vector. You need to use STL here.
// */
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// { int n;
//     cout<<"Enter the range of vector:";
//     cin>>n;
//   vector<int>v(n);
//   cout<<"Enter the element of vector:";
//   for(int i=0;i<n;i++)
//   cin>>v[i];
//   int element_to_count;
//   cout<<"Enter the element which you want to count its occurance:";
//   cin>>element_to_count;
//   int count=count(v.begin(),v.end(),element_to_count);
// cout<<"Ocurrance is:"<<count;
// return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the range of vector:";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the vector:";
    
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int element_to_count;
    cout << "Enter the element which you want to count its occurrence:";
    cin >> element_to_count;

    int count = std::count(v.begin(), v.end(), element_to_count);
    
    cout << "Occurrence is: " << count;

    return 0;
}
