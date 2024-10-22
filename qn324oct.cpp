/*How to find maximum and minimum elements from the vector. USE STL here.
Find Lower bound and Upper Bound of a given element in a sorted vector. USE STL here to find them.
How to pass a vector to a function. Write a small code for it.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n;
    cout<<"Enter the range of vector:";
    cin>>n;
  vector<int>v(n);
  cout<<"Enter the element of vector:";
  for(int i=0;i<n;i++)
  cin>>v[i];
  int Max_element=max_element(v.begin(),v.end());
int Min_element=min_element(v.begin(),v.end());
    cout<<"The max element is:"<<Max_element<<endl<<"The min element is:"<<Min_element;
    return 0;
    }