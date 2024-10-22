#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node* Binary_Tree()
{
    int x ;
    // cout<<"Enter the root value of Tree ";
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    else
    {
        Node *temp = new Node(x);
        //Left side
        cout<<"Enter the left child of "<<x<<" :";
        // cin>>x;
        temp->left = Binary_Tree();
         cout<<"Enter the right child of "<<x<<" :";
        // cin>>x;
        // Right side
        temp->right = Binary_Tree();
        return temp;
    }
}
void preorder(Node *root)
{

    if(root==NULL)
    {
        return;
    }
    // NOde
    cout<<root->data<<" ";
    // Left
    preorder(root->left);
    //Right
    preorder(root->right);
}
void inorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    //Left
    inorder(root->left);
    //Node
    cout<<root->data<<" ";
    //Right
    inorder(root->right);

}
void postorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }

    // Left
    postorder(root->left);
    // Right
    postorder(root->right);
    //Node
    cout<<root->data;
}
int main()
{
    cout<<"Enter the Root Node: ";
    Node *root;
    root = Binary_Tree();
    cout<<"Preorder: ";
    preorder(root);

    cout<<"\nInorder: ";
    inorder(root);

    cout<<"\nPostorder: ";
    postorder(root);

}