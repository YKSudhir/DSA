#include<iostream>
using namespace std;
int main()
{
//    char arr[5]="1234";
//    char *ptr=arr;
//    cout<<(void*)ptr<<endl;
//    cout<<(void*)&arr[0]<<endl; 
//    char a[5]={'a','b','c','d','e'};
//    char *p=a;
//    cout<<(void*)p<<endl;
//    cout<<(void*)&a[0]<<endl;
//    char name='a';
//    char *pt=&name;
//    cout<<(void*)pt<<endl;
//    cout<<(void*)&name<<endl;
int arr[5]={1,2,3,4,5};
// cout<<arr<<endl;
// cout<<&arr[1]<<endl;
int *ptr=&arr[4];
for(int i=0;i>-5;i--)
{
    cout<<ptr[i]<<endl;
}




}
