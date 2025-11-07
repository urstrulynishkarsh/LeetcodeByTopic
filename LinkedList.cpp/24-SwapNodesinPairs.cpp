#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int val)
    {
        this->data=val;
        this->next=NULL;
    }
};


Node *swapPairs(Node *&head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node *first=head;
    Node *second=head->next;

    first->next=swapPairs(second->next);
    second->next=first;

    return second;
}

void printList(Node *&head)
{
    Node *curr=head;
    for(Node *curr=head;curr!=NULL; curr=curr->next)
    {
        if(curr->next==NULL)
        {
            cout<<curr->data<<endl;
            break;
        }
        cout<<curr->data<<"->";
    }
}

int main()
{
    int n;
    // cout<<"Enter the size of Linked List: ";
    // cin>>n;

    // if(n<=0)
    // {
    //     cout<<"Linked List size should be greater than 0"<<endl;
    //     return 0;
    // }

    do{
        cout<<"Enter the size of Linked List: ";
        cin>>n;
        if(n<=0)
        {
            cout<<"Linked List size should be greater than 0"<<endl;
        }
    }while(n<=0);

    vector<int> nums(n);
    cout<<"Enter the elements of Linked List: ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }   

    Node *head=new Node(nums[0]);
    Node *temp=head;
    for(int i=1;i<n;i++)
    {
        Node *newNode=new Node(nums[i]);
        temp->next=newNode;
        temp=temp->next;
    }

    cout<<"The Linked List is before swapping: "<<endl;
    printList(head);

    Node *first=swapPairs(head);

    cout<<"The Linked List is after swapping: "<<endl;
   
    printList(first);


}