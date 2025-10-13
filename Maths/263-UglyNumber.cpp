#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int UglyNumber(int &n)
{
    if(n<=0)
    {
        return false;
    }
    for(int p:{2,3,5})
    {
        while(n%p==0)
        {
            n/=p;
        }
    }
    return n==1;
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<UglyNumber(num);
}