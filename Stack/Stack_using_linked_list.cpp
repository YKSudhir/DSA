#include<iostream>
using namespace std;
class Node
{   public:
    int data;
    Node *next;
    public:
    Node(int value)
    {
        data = value;
        next =NULL;
    }
};
class Stack
{
    Node *top;
    int size;
    public:
    Stack()
    {
        top = NULL;
        size =0;
    }


    //push
    void push(int val)
    {   

        Node *temp = new Node(val);
        temp->next = top;
        top = temp;
        size++;
        cout<<"The entered value is: "<<top->data<<"\n";
        cout<<"The size of current stackk is: "<<size<<endl<<endl<<endl;
    }


    //pop
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack is Underflow\n";
        }
        else
        {   
            cout<<"The popped element from stack is: "<<top->data<<"\n";
            cout<<"The current size of stack is:"<<size--<<"\n"<<endl<<endl;
            Node *temp = top;
            top = top->next;
            delete temp;
            
        }
    }


    //peep
    int peep()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty\n";
        }
        else
        {
            cout<<"The data is: "<<top->data<<"\n"<<endl<<endl;
        }
    }
};
int main()
{
    Stack a;
    a.push(4);
    a.push(6);
    a.push(7);
    a.push(8);
    a.push(9);
    a.push(1);
    a.pop();
    a.peep();
    return 0;
}
//stack<int> s;