#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // int n;
    // cout<<"Enter the size of Vector: ";
    // cin>>n;

    // vector<int> v(n);
    // cout<<"Enter the element in the Vector: ";
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }


    
    vector<int> miles(10);
    vector<int> distances(10,0);
    cout<<*miles.begin()<<endl; //0
    cout<<*miles.end()<<endl;  //0


    vector<int> marks;
    cout<<"maximum size of vector: "<<marks.max_size()<<endl;
    marks.reserve(10);
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);

    // marks.clear();
   

    cout<<"capacity of vector: "<<marks.capacity()<<endl;

    cout<<"size of vector: "<<marks.size()<<endl; //5

    marks.pop_back();
    cout<<"size of vector: "<<marks.size()<<endl; //4

    cout<<"front element is: "<<marks.front()<<endl; //10
    cout<<"end element is: "<<marks.back()<<endl;  //40
    marks.insert(marks.begin(),100);
    cout<<marks.front()<<endl;

    if(marks.empty()==true)
    {
        cout<<"marks is empty: "<<endl;
    }
    else{
        cout<<"marks is not empty"<<endl;
    }

   






}