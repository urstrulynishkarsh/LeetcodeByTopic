#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> first;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.push_back(50);

    vector<int> ::iterator it=first.begin();

    while(it!=first.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;


    vector<vector<int> > arr(4,vector<int>(5,0));
    cout<<"no of row: "<<arr.size()<<endl;
    cout<<"no of col: "<<arr[0].size()<<endl;


}