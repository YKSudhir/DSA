#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
     

     Node(int value)
     {
        data = value;
        next = NULL;
     }
};
// //Add elements at the end of node
// Node* CreateLinkedList(int arr[] , int index , int size)
// {
//     //Base case
//     if(index==size)
//     {
//         return NULL;
//     }
//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next=CreateLinkedList(arr , index+1 , size);
//     return temp;
// } 

//Add element at the starting of Node
Node* CreateLinkedList(int arr[], int index , int size , Node *prev)
{
    //Base Case
    if(index==size)
    {
        return prev;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    return CreateLinkedList(arr , index+1 , size , temp);
}
int main()
{
    Node *Head;
    Head = NULL;
    int arr[]={1,2,3,4,5};
    
    Head = CreateLinkedList(arr , 0 , 5 ,Head );
    //Insert Node at Particular Position
    int x=3; //Insert Position
    int value = 30;
    Node *temp=Head;
    while(x--)
    {
        temp=temp->next;
    }
    Node *temp2= new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;
//Delete Node at start
if(Head!=NULL)
{
    Node *temp=Head;
    Head=Head->next;
    delete temp;
}
//Delete Node at end
if(Head->next==NULL)
{
    Node *temp=Head;
    Head=NULL;
    delete temp;
}

else{
    Node *curr=Head;
    Node *prevn=NULL;
    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next = curr->next;
    delete curr;
    

}


   
    temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

} 

