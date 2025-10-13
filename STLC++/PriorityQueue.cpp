#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq; //max heap by default
    pq.push(10);
    //10
    pq.push(20);
    //20 10
    pq.push(30);
    //30 20 10
    pq.push(40);
    //40 30  20 10
    pq.push(50);
    //50 40  30 20 10
    pq.push(5);
    //50 40  30  20 10 5
    pq.push(1);
    //50 40  30  20 10 5 1
    pq.push(100);
    //100 50 40 30 20 10 5 1

    cout<<endl;

    // it will show hightest priority element
    cout<<"top element is: "<<pq.top()<<endl; //100
   
    cout<<"size of priority queue is: "<<pq.size()<<endl; //8
     // highest element will be pop from the top
    pq.pop();

    cout<<"top element is: "<<pq.top()<<endl; //50
    cout<<"size of priority queue is: "<<pq.size()<<endl; //7
    

    if(pq.empty())
    {
        cout<<"priority queue is empty"<<endl;
    }
    else{
        cout<<"priority queue is not empty"<<endl;
    }



    priority_queue<int,vector<int>,greater<int>> pq1; //min heap
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);
    pq1.push(50);
    pq1.push(5);
    pq1.push(1);
    pq1.push(100);

    cout<<"top element is: "<<pq1.top()<<endl; //1
    cout<<"size of priority queue is: "<<pq1.size()<<endl; //8
    pq1.pop();
    cout<<"top element is: "<<pq1.top()<<endl; //5
    cout<<"size of priority queue is: "<<pq1.size()<<endl; //7
}