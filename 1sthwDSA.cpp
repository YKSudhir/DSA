// Day 22/180 Introduction to Arrays in c++
// 1: Take 20 elements from user input and find its sum with the help of an array.
// 2: Calculate the average of elements in an array of size 18.
// 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
// 5: Find the second largest element in an array of unique elements of size n. Where n>3.
// 6: Find the third smallest element in an array of unique elements size n. Where n>3.
// 7: What is Byte addressable?
#include<iostream>
using namespace std;
int main()
{
    int sum=0, arr[20];
    cout<<"Enter your numbers:";
    for( int i=0 ; i<20 ; i++)
    {
        cin>>arr[i];
    }
    for(int i =0 ; i < 20 ; i++)
    {
        sum=sum+arr[i];
    }
cout<<"The sum of numbers is:"<<sum<<endl;
}

