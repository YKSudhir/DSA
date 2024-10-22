/*1.Take values of length and breadth of a rectangle from user and check if it is square or not*/
#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter the length: ";
    cin>>l;
    cout<<"Enter the breadth: ";
    cin>>b;
    if(l==b)
    {
        cout<<"The given dimesion is of Square.";

    }
    else 
    {
        cout<<"The given dimension is not of square .";
    }
}
