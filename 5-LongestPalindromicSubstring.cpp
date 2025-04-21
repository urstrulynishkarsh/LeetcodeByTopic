#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

bool checkPalindrome(string &str, int i,int j)
{
    while(i<=j)
    {
        if(str[i++]!=str[j--])
        {
            return false;
        }
    }
    return true;
}

// Time Complexity O(N^3)
// Space Complexity O(1)
string longestPalindromicSubstring(string &str)
{
    int start=0;
    int maxLength=0;
    for(int i=0;i<str.length();i++)
    {
        for(int j=i;j<str.length();j++)
        {
            if(checkPalindrome(str,i,j))
            {
                if(j-i+1>maxLength)
                {
                    maxLength=j-i+1;
                    start=i;
                }
            }
        }
    }
    return str.substr(start,maxLength);
}
int main()
{
    string str;
    cout<<"Enter the String: ";
    getline(cin,str);
    string ans=longestPalindromicSubstring(str);
    cout<<ans;
}