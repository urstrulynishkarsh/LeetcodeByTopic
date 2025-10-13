#include<iostream>
#include<list>
using namespace std;


int main()
{
    list<int> mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);
    mylist.push_back(50);

    mylist.push_front(100);
    mylist.push_back(200);

    mylist.remove(30);
    list<int>::iterator it=mylist.begin();


    while(it!=mylist.end())
    {
        cout<<*it<<"->";
        it++;
    }
    cout<<endl;





    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;

    mylist.pop_back();
    mylist.pop_front();

    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;

    cout<<mylist.size()<<endl;
    mylist.clear();
    cout<<mylist.size()<<endl;

    if(mylist.empty())
    {
        cout<<"list is empty"<<endl;
    }
    else{
        cout<<"list is not empty"<<endl;
    }


    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.push_back(50);

    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);
    second.push_back(500);
    cout<<"before swap"<<endl;
    list<int>::iterator it1=first.begin();
    while(it1!=first.end())
    {
        cout<<*it1<<"->";
        it1++;
    }

    cout<<endl;
    list<int>::iterator it2=second.begin();
    while(it2!=second.end())
    {
        cout<<*it2<<"->";
        it2++;
    }  
    cout<<endl;
    cout<<"after swap"<<endl;


    first.swap(second);

    // list<int>::iterator it1=first.begin();
    it1=first.begin();
    it2=second.begin();
    while(it1!=first.end())
    {
        cout<<*it1<<"->";
        it1++;
    }
    cout<<endl;
    // list<int>::iterator it2=second.begin();
    while(it2!=second.end())
    {
        cout<<*it2<<"->";
        it2++;
    }   
}