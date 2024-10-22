// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *prev;
//     Node *next;
     
//     Node(int value)
//     {
//         data = value;
//         next = prev = NULL;
//     }
// };
// Node* Creat_Doubly_Linked_List(int arr[] , int index , int arr_size  , Node *back)
//  {
//     if(index == arr_size)
//     {
//         return NULL;
//     }
//     Node *temp = new Node(arr[index]);
//     temp->prev = back;
//     temp->next = Creat_Doubly_Linked_List(arr, index+1 , arr_size  , back);
//     return temp;


//  }
// int main()
// {
//     int arr[5] = {1 , 2 , 3 , 4 , 5};
//     int x = 2;
//     Node *head;
//     head = Creat_Doubly_Linked_List(arr, 0 , 5  , NULL); 
//     Node *curr = head;
//     //consider pos =0 also
//     while(--x)
//     {
//         curr = curr->next;
//     }
//     Node *temp = new Node(8);
//     temp->next = curr->next;
//     temp->prev = curr;
//     curr->next = temp;
//     temp->next->prev = temp;
//     //Delete at start
//     if(head!=NULL)
//     {
//         if(head->next ==NULL)
//         {
//             delete head;
//             head = NULL;
//         }
//         else
//         {
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//         head->prev = NULL;
        
//         }
       
//     }
//     //Delete at end
//     if(head!=NULL)
//     {
//         if(head->next==NULL)
//         {
//             delete head;
//             head = NULL;
//         }
//         //more than 1 Node exist
//         else
//         {
//         Node *curr = head;
//         //last node pa jao
//         while(curr->next)
//         {
//             curr = curr->next;
//         }
//         curr->prev->next = NULL;
//         delete curr;
//         }
      
//     }
    
    
   
//     Node *trav;
//     trav = head;
//     while(trav)
//     {
//         cout<<trav->data<<" ";
//         trav = trav->next;
//     }
//     return 0;
// }
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

Node* Creat_Doubly_Linked_List(int arr[], int index, int arr_size, Node *back)
{
    if (index == arr_size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = Creat_Doubly_Linked_List(arr, index + 1, arr_size, back);
    return temp;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x = 2;
    Node *head;
    head = Creat_Doubly_Linked_List(arr, 0, 5, NULL);

    Node *curr = head;
    // Move to the specified position (x)
    while (--x)
    {
        curr = curr->next;
    }

    // Insert a new node with data 8 after the current position
    Node *temp = new Node(8);
    temp->next = curr->next;
    temp->prev = curr;
    curr->next = temp;
    temp->next->prev = temp;

    // Delete node at the start
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }
    }

    // Delete node at the end
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *curr = head;
            // Traverse to the last node
            while (curr->next)
            {
                curr = curr->next;
            }
            // Update previous node's next pointer and delete the last node
            curr->prev->next = NULL;
            delete curr;
        }
    }

    // Print the elements of the doubly linked list
    Node *trav;
    trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}
