#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

bool PowerOfTwo(int &n)
{
    if(n==1)
    {
        return true;
    }
    if(n<2)
    {
        return false;
    }
    if((n & (n-1))==0)
    {
        return true;
    }
    return false;
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<PowerOfTwo(n);
}