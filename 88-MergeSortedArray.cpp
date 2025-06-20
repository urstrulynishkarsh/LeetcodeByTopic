#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the full Size of Array: ";
    cin>>n;
    vector<int> v1(n);
    cout<<"Enter the element in the Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    int m;
    cout<<"Enter the Size of Second Array: ";
    cin>>m;
    vector<int> v2(m);
    cout<<"Enter the element in the Array: ";
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    
    
}