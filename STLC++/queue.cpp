#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"front element is: "<<q.front()<<endl; //10
    cout<<"back element is: "<<q.back()<<endl;   //50

    cout<<"size of queue is: "<<q.size()<<endl; //5

    q.pop();
    cout<<"front element is: "<<q.front()<<endl; //20
    cout<<"size of queue is: "<<q.size()<<endl; //4

    if(q.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    queue<int> q1;
    q1.push(100);
    q1.push(200);
    q1.push(300);


    q.swap(q1);
    cout<<"after swapping: "<<endl;
    cout<<"front element is: "<<q.front()<<endl; //100
    cout<<"back element is: "<<q.back()<<endl;   //300
    cout<<"size of queue is: "<<q.size()<<endl; //3

    cout<<"front element is: "<<q1.front()<<endl; //20
    cout<<"back element is: "<<q1.back()<<endl;   //40
    cout<<"size of queue is: "<<q1.size()<<endl; //4



}