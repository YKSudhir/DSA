#include<iostream>
using namespace std;
class Stack
{
    int size;
    int *arr;
    int top;

public:
    Stack(int s)
    {
        arr = new int[s];
        top = -1;
        size = s;
    }
    void push(int value)
    {
        if (top==size-1)
        {
            cout<<"Stack Overflow\n";
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"The value "<<arr[top]<<" is inserted\n";
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow\n";
        }
        else
        {
            cout<<"Stack element "<<arr[top]<<" is popped out\n";
            top--;
        }
    }
    int gettop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow\n";
            return -1;
        }
        else
        {
            cout<<"The top element is: "<<arr[top]<<"\n";
        }
    }
    int issize()
    {
      
        
            cout<<"Size of Stack is: "<<top++<<"\n";
        
    }
    bool isempty()
    {
        return (top==-1);
    }
};
int main()
{
    Stack a(5);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.push(7);
    a.pop();
    a.pop();
    a.issize();
    int value = a.isempty();
    cout<<value<<endl;
    a.gettop();
    return 0;
}