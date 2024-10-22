#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *prev;
    Node *next;
     
    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};
int main()
{
    int arr[5] = {1 , 2 , 3 , 4 , 5};
    Node *head = NULL;
    Node *temp = NULL;;
    Node *tail=NULL;
    for( int i=0 ; i<5 ; i++)
    {
        if(head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    //Delete at given position 
    int pos = 3;
    //Delete at start
    if(pos==1)
    {
        if(head->next==NULL)
        {
            delete head;
            head = NULL;
        }
        //if more than 1 node exist
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }
    }
    else
    {
        Node *curr = head;
        while(--pos)
        {
            curr = curr->next;
        }
        //Delete at the end
        if(curr->next==NULL)
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }

    }
    Node *trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}