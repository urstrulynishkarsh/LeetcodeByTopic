#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;


// Time Complexity O(N)
// Space Complexity O(1)
int LongestSubstringWithoutrepeating(string &str)
{
    vector<int> chars(128,-1);
    int maxLength=0;
    int start=0;
    for(int end=0;end<str.length();end++)
    {
        if(chars[str[end]]>=start)
        {
            start=chars[str[end]]+1;
        }
        chars[str[end]]=end;
        maxLength=max(maxLength,end-start+1);
    }
    return maxLength;
}
int main(){
    string str;
    cout<<"Enter the String: ";
    getline(cin,str);
    cout<<LongestSubstringWithoutrepeating(str);
}
