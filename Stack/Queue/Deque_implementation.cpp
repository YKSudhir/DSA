#include<iostream>
using namespace std;
class Node
{
    public:
    Node *next; //NOde *next *prev;
    Node *prev;
    int data;

    Node(int val)
    {
        next = NULL;
        prev = NULL;
        data = val;
    }
};
class Dequeue
{
    // public:
    Node *front;
    Node *rear;
    public:
    Dequeue()
    {
        front = rear = NULL;
    }

    // push front 

    void push_front(int x )
    {
        //Empty
        if(front==NULL)
        {
            front  = rear = new Node(x);
            cout<<"Pushed "<<x<<" in front of Dequeue"<<endl;
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout<<"Pushed "<<x<<" in front of Dequeue"<<endl;
            return;
        }
    }

    // push back

    void push_back(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            cout<<"Pushed "<<x<<" in back of Dequeue"<<endl;
            return;
        }
        else
        {
            Node *temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            cout<<"Pushed "<<x<<" in back of Dequeue\n";
            return ;
        }
    }

    //pop front 

    void pop_front()
    {
        // Empty
        if(front==NULL)
        {
            cout<<"Dequeue is empty\n";
            return ;
        }
        else
        {
            Node *temp = front;
            cout<<"Popped "<<temp->data<<" from front"<<endl;
            front = front->next;
            delete temp;
            // Greater than 1 Node
            if(front)
            {
                front->prev = NULL;
               // return ;
            }
            // 1 Node
            else
            {
                rear = NULL;
               // return ;
            }
        }
    }
    // Pop back
    void pop_back()
    {
        // Empty
        if(front==NULL)
        {
            cout<<"Dequeue is empty"<<endl;
            return ;
        }
        else
        {
            Node *temp = rear;
             cout<<"Popped "<<temp->data<<" from back"<<endl;
            rear = rear->prev;
            delete temp;
            // Greater than 1 element
            if(rear)
            {
                rear->next = NULL;
                //return ;
            }
            // 1 Node
            else
            {
                front = NULL;
                //return;
            }
        }
    }

    // Start

    int start()
        {
            if(front == NULL)
            {
                return -1;
            }
            else
            {
                return front->data;
            }
        }
    
    // End

    int end()
    {
        if(front==NULL)
        {
            return -1;
        }
        else
        {
            return rear->data;
        }
    }
};
int main()
{
    Dequeue d;
    d.push_front(6);
    d.push_front(5);
    d.push_front(3);
    d.push_front(2);
    d.push_front(1);
    d.push_back(9);
    d.push_back(11);
    d.push_back(12);
    d.push_back(45);
    d.push_back(78);
    d.pop_front();
    d.pop_front();
    d.pop_front();
    d.pop_back();
    d.pop_back();
    d.pop_back();
    int start = d.start();
    cout<<"Starting element is "<<start<<endl;
    int end = d.end();
    cout<<"Ending element is "<<end<<endl;
    

    return 0;

}