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
    list<int> ::iterator it=mylist.begin();


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
}