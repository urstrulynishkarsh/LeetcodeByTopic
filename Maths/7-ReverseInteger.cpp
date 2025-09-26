#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;


// Time Complexity O(Log(base10 n))
// Space Complexity O(1)
int ReverseInteger(int &n)
{
    int reversed=0;
    while(n!=0)
    {
        int digit=n%10;
        if(reversed>INT_MAX/10 || reversed<INT_MIN/10)
        {
            return 0;
        }
        reversed=reversed*10+digit;
        n/=10;
    }
    return reversed;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<ReverseInteger(n);
}