#include<iostream>
using namespace std;
class Dequeue
{
    int size , rear , front;
    int *arr;

    public:
    Dequeue(int n)
    {
        size = n;
        rear = front = -1;
        arr = new int[n];
    }

    // Empty
    bool Is_Empty()
    {
        return front == -1;
    }

    // Full
    bool Is_full()
    {
        return (rear+1)%size== front;
    }
    // push front
    void push_front(int x)
    {
        // Empty
        if(Is_Empty())
        {
            rear = front = 0;
            cout<<"Pused "<<x<<" in front\n";
            arr[0] = x;
            return ;
        }
        // Full
        else if(Is_full())
        {
            cout<<"Dequeue is Overflow\n";
            return;
        }
        // Normal
        else
        {
            front = ((front-1)+size)%size;
            cout<<"Pused "<<x<<" in front\n";
            arr[front] = x;
            return;
        }
    }
     
    // Push back
    void push_back(int x)
    {
        // Empty
        if(Is_Empty())
        {
            rear = front = 0;
            cout<<"Pushed "<<x<<" in back\n";
            arr[0] = x;
        }
        //Full
        else if(Is_full())
        {
            cout<<"Dequeue is overflow\n";
            return;
        }
        // Normal
        else
        {
            rear = (rear+1)%size;
            cout<<"Pushed "<<x<<" in back\n";
            arr[rear] = x;
            return;
        }
    }
    // pop font

    void pop_front()
    {
        // Empty

        if(Is_Empty())
        {
            cout<<"Dequeue is Underflow\n";
            return;
        }
        // 1 element
        else if(rear==front)
        {
            cout<<"Popped "<<arr[front]<<" from front side of Dequeu\n";
            rear = front = -1;
        }
        // Greater than 1 element

        else
        {
            cout<<"Popped "<<arr[front]<<" from front side of Dequeu\n";
            front = (front+1)%size;
        }
    }
    void pop_back()
    {
        if(Is_Empty())
        {
            cout<<"Dequeue is Underflow\n";
            return;
        }
        else if(rear==front)
        {
            cout<<"Popped "<<arr[rear]<<" from back side of Dequeu\n";
            rear = front = -1;
        }
        else
        {
            cout<<"Popped "<<arr[rear]<<" from back side of Dequeu\n";
            rear = ((rear-1)+size)%size;
        }
    }
    int start()
    {
        if(Is_Empty())
        {
            return -1;
        }
        else
        return arr[front];
    }
    int end()
    {
        if(Is_Empty())
        {
            return -1;
        }
        else
        return arr[rear];
    }

};
int main()
{
    Dequeue d(6);
    d.push_back(8);
    d.push_back(4);
    d.push_front(7);
    d.push_front(9);
    d.push_front(0);
    d.pop_back();
    d.pop_front();
    cout<<d.start();
}