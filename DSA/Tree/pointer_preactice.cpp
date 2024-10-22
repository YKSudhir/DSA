#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // int array[5];
    // array[0]=2;
    // cout<<array<<endl;


    // char arr[5] = "1234";
    // char *ptr = arr;
    // cout<<ptr<<endl;
    // cout<<arr;
    // cout<<"\n";
    // cout<<"\n";
    // cout<<(void*)arr<<endl;

    char name = 'a';
    
    char *ptr = &name;
    cout<<(void*)ptr;

    

}