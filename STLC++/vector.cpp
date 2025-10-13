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
    // marks.push_front(5);

    cout<<"marks at index 1 is: "<<marks.at(1)<<endl; //20

    // marks.clear();
   

    cout<<"capacity of vector: "<<marks.capacity()<<endl;

    cout<<"size of vector: "<<marks.size()<<endl; //5

    marks.pop_back();
    cout<<"size of vector: "<<marks.size()<<endl; //4

    cout<<"front element is: "<<marks.front()<<endl; //10
    cout<<"end element is: "<<marks.back()<<endl;  //40
    marks.insert(marks.begin(),100);
    marks.insert(marks.begin()+3,200);
    for(int i:marks)
    {
        cout<<i<<" ";
    }
    cout<<marks.front()<<endl;

    if(marks.empty()==true)
    {
        cout<<"marks is empty: "<<endl;
    }
    else{
        cout<<"marks is not empty"<<endl;
    }




    vector<int> first;
    vector<int> second;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    cout<<"size of first vector is: "<<first.size()<<endl;
    first.erase(first.begin(),first.begin()+2);

    cout<<"first vector is: ";
    for(int i:first)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of first vector is: "<<first.size()<<endl;

    second.push_back(100);
    second.push_back(200);
    second.push_back(300);

    first.swap(second);

    cout<<"first vector is: ";
    for(int i:first)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"second vector is: ";
    for(int i:second)
    {
        cout<<i<<" ";
    }


    cout<<endl;
    // now we are working with iterator

    vector<int>::iterator it=marks.begin();
    cout<<"value is: "<<*it<<endl; //100

   






}