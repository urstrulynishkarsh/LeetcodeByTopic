#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int data)
        {
            this->data=data;
            left=right=NULL;
        }
};

Node *insert(Node *&root,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }

    if(val<root->data)
    {
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}

Node *BuildBST(vector<int> &nums)
{
    Node *root=NULL;
    for(int val:nums)
    {
        root=insert(root,val);
    }
    return root;
}

void inorder(Node *&root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node *inorderSuccesor(Node *&root)
{
    while(root!=NULL && root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}
Node *deleteNode(Node *&root,int val)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(val<root->data)
    {
        root->left=deleteNode(root->left,val);
    }
    else if(val>root->data)
    {
        root->right=deleteNode(root->right,val);
    }
    else{
        // key==root->data
        if(root->left==NULL)
        {
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else{
            // two children
            Node *INS=inorderSuccesor(root->right);
            root->data=INS->data;
            root->right=deleteNode(root->right,INS->data);
        }
    }
    return root;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    vector<int> array(n);
    cout<<"Enter the element in the Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    Node *root=BuildBST(array);

    cout<<"Before delete: ";
    inorder(root);
    cout<<endl;


    int deletevalue;
    cout<<"Enter the delete value: ";
    cin>>deletevalue;

    deleteNode(root,deletevalue);

    cout<<"after delete: ";
    inorder(root);


    
}