#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node *left , *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int main()
{
    queue<Node*>q;
    int x;
    int first , second;
    cout<<"Enter the root element: ";
    cin>>x;
    Node *root = new Node(x);
    q.push(root);
    //Build Binary tree
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        // Left Node
        cout<<"Enter the Left child of "<<temp->data<<" : ";
        cin>>first;
        if(first!=-1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        // Right Node
        cout<<"Enter the Right child of "<<temp->data<<" : ";
        cin>>second;
        if(second!=-1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    return 0;
}