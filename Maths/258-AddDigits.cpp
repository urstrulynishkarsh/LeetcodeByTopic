#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int AddDigits(int &num)
{
    if(num<=9)
    {
        return num;
    }
    if(num%9==0)
    {
        return 9;
    }
    return num%9;
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<AddDigits(num);
}