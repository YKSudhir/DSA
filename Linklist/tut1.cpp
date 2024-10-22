#include<iostream>
using namespace std;
 class Node
 {
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
 };
 int main()
 {
    Node *Head;
    Head = NULL;
    // Head = new Node(4);
    // cout<<Head->data<<endl;
    // cout<<Head->next<<endl;
   
    //Linked list doesn't exist


     //Insert the node at begning
    int arr[] = {1 , 2 , 3 , 4 , 5};
    // for(int i=0 ; i<5 ; i++)
    // {
    //      if(Head==NULL)
    // {
    //     Head = new Node(arr[i]);
    // }
    // //Linked list exist karti
    // else{
    //     Node *temp;
    //     temp = new Node(arr[i]);
    //     temp->next = Head;
    //     Head = temp;
    // }
    // }
    // Node *temp = Head;

    // while(temp!=NULL) //while(temp)
    // {
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // };




    //Insert the node at the end
//     for(int i = 0 ; i <5 ; i++)
// {
//     if(Head==NULL)
//     {
//         Head = new Node(arr[i]);
//     }
//     else 
//     {
//         Node *tail = Head;
//         while(tail->next!=NULL)
//         {
//             tail=tail->next;
//         }
//        tail->next=new Node(arr[i]); 
//     }
// } 
//     Node *temp=Head;
//     while(temp!=NULL) //while(temp)
//      {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//      }; 


// OR Insert at the end
 Node *tail = NULL;
  for(int i = 0 ; i <5 ; i++)
{
    if(Head==NULL)
    {
        Head = new Node(arr[i]);
        tail = Head;
    }
    else 
    {
      tail->next = new Node(arr[i]);
      tail = tail->next;
    }
} 
    Node *temp=Head;
    while(temp!=NULL) //while(temp)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     };  


   
 }