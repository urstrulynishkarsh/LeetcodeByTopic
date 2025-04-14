#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data)
        {
        this->data=data;
        this->next=NULL;
        }
};

void Insert(Node *&head, int data)
{
    Node *newNode=new Node(data);
    if(!head)
    {
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}



// Time Complexity = O(max(list1,list2))
// Space Complexity = O(max(list1,list2))
Node *addTwoNumber(Node *&list1, Node *&list2)
{
    Node *ans=new Node(-1);
    Node *temp=ans;
    int carry=0;

    while(list1 || list2 || carry)
    {
        int sum=0;
        if(list1)
        {
            sum+=list1->data;
            list1=list1->next;
        }
        if(list2)
        {
            sum+=list2->data;
            list2=list2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node *newNode=new Node(sum%10);
        temp->next=newNode;
        temp=temp->next;
    }
    return ans->next;

}




int main()
{
    int data;
    Node *list1 = NULL, *list2 = NULL;
    int n;
    cout<<"Enter the Size of First LinkedList: ";
    cin>>n;

    cout<<"Enter the Element in the first LinkedList: ";
    for(int i=0;i<n;i++)
    {
        cin>>data;
        Insert(list1,data); 
    }

    int m;
    cout<<"Enter the Size of Second LinkedList: ";
    cin>>m;

    cout<<"Enter the Element in the Second LinkedList: ";
    for(int i=0;i<m;i++)
    {
        cin>>data;
        Insert(list2,data); 
    }
  


    Node *result=addTwoNumber(list1,list2);
    while(result!=NULL)
    {
        if(result->next!=NULL){
            cout<<result->data<<"->";
        }
        else
        {
            cout<<result->data;
        }
        result=result->next;
    }

}