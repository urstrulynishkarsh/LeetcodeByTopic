#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node * right;

    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

Node * rightmostInLeftSubTree(Node *&root)
{
    Node *ans;
    while(root!=NULL)
    {   
        ans=root;
        root=root->right;
    }
    return ans;
}

Node * leftmostinRightSubTree(Node *&root)
{
    Node *ans;
    while(root!=NULL)
    {   
        ans=root;
        root=root->left;
    }
    return ans;
}






vector<int> inorderPreSucc(Node *root,int &key)
{
    Node *curr=root;
    Node *pred=NULL;
    Node *succ=NULL;
    while(curr!=NULL)
    {
        if(key<curr->data)
        {
            succ=curr;
            curr=curr->left;
        }
        else if(key>curr->data)
        {
            pred=curr;
            curr=curr->right;
        }
        else{
            if(curr->left!=NULL)
            {
                pred=rightmostInLeftSubTree(curr->left);
            }
            if(curr->right!=NULL)
            {
                succ=leftmostinRightSubTree(curr->right);
            }
            break;

        }
    }
    return {pred->data,succ->data};
}


int main()
{
    Node *root=new Node(6);
    root->left=new Node(4);
    root->left->left=new Node(1);
    root->left->right=new Node(5);
    root->right=new Node(8);
    root->right->left=new Node(7);
    root->right->right=new Node(9);

    int key=8;

    vector<int> ans=inorderPreSucc(root,key);
    cout<<"pred"<<ans[0]<<endl;
    cout<<"succ"<<ans[1]<<endl;



}