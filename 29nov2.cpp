// Day 64/180 Pointers Arithmetic
// 1: Print the address of the first index of the char array in c++.
// 2: Print the address of the char variable in c++.
// 3: Print the address of String in c++.
// 4: Given an array in c++
// int arr[5] = {1,2,3,4,5};
// What is the difference between arr and &arr. Try to explore it on your own.
// 5: int arr[5] = {1,2,3,4,5};
//     Create a pointer which will store the address of the last element. Then print all the elements from the last index to 0th index with the help of a pointer.
#include<iostream>
using namespace std;
int main()
{
char arr[4]={'a','b','c','d'};
char *p=&arr[4];
cout<<p;

}