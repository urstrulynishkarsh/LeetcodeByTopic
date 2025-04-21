#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

bool checkPalindrome(int &n)
{
    if(n<0)
    {
        return false;
    }
    long long original=n;
    long long reversed=0;
    while(n)
    {
        int digit=n%10;
        reversed=reversed*10+digit;
        n/=10;
    }
    if(reversed==original)
    {
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<checkPalindrome(n);

}