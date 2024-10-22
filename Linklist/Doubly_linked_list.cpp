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
    Node *head=NULL;
    //Insert at start

    //Linked List dosen't exist
    if(head==NULL)
    {
        head = new Node(5);
    }
    else{
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    // Insert at the end
    Node *curr;
    curr=head;
    while(curr->next)
    {
        curr = curr->next;
    }
    Node *temp=NULL ;
    temp = new Node(6);
    curr->next = temp;
    temp->prev = curr;

    Node *trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}