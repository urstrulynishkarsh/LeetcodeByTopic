#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    // 10 20 30 40 50

    dq.push_front(100);
    dq.push_front(200);
    // 200 100 10 20 30 40 50

    deque<int>:: iterator it=dq.begin();
    while(it!=dq.end())
    {
        cout<<*it<<"->";
        it++;
    }
    cout<<endl;

    cout<<"front element is: "<<dq.front()<<endl; //200
    cout<<"back element is: "<<dq.back()<<endl;   //50

    cout<<"size of deque is: "<<dq.size()<<endl; //7

    dq.pop_front();
    cout<<"front element is: "<<dq.front()<<endl; //100
    cout<<"size of deque is: "<<dq.size()<<endl; //6

    dq.pop_back();
    cout<<"back element is: "<<dq.back()<<endl;   //40
    cout<<"size of deque is: "<<dq.size()<<endl; //5

    if(dq.empty())
    {
        cout<<"deque is empty"<<endl;
    }
    else{
        cout<<"deque is not empty"<<endl;
    }

    deque<int> dq1;
    dq1.push_back(1000);
    dq1.push_back(2000);
    dq1.push_back(3000);

    dq.swap(dq1);
    cout<<"after swapping: "<<endl;
    cout<<"front element is: "<<dq.front()<<endl; //1000
    cout<<"back element is: "<<dq.back()<<endl;   //3000
    cout<<"size of deque is: "<<dq.size()<<endl; //3


    
    
}