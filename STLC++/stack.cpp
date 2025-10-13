#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int  main()
{
    stack<int> st;
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(100);
     st.push(200);
     st.push(40);

    cout<<"top element is: "<<st.top()<<endl; //40
    cout<<"size of stack is: "<<st.size()<<endl; //6
    st.pop();
    cout<<"top element is: "<<st.top()<<endl; //100
    cout<<"size of stack is: "<<st.size()<<endl; //5
    if(st.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    stack<int> st1;
    st1.push(1000);
    st1.push(2000);
    st1.push(3000);
    st.swap(st1);
    cout<<"after swapping: "<<endl;
    cout<<"top element is: "<<st.top()<<endl; //3000
    cout<<"size of stack is: "<<st.size()<<endl; //3

    cout<<"top element is: "<<st1.top()<<endl; //100
    cout<<"size of stack is: "<<st1.size()<<endl; //5       


    // cout<<st.begin()<<endl; //error
}