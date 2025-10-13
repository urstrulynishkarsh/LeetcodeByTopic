#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int romanToInt(string s){
    unordered_map<char,int> values={
        {'M',1000},
        {'D',500},
        {'C',100},
        {'L',50},
        {'X',10},
        {'V',5},
        {'I',1}
    };
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(values[s[i]]<values[s[i+1]])
        {
            ans-=values[s[i]];
        }
        else
        {
            ans+=values[s[i]];
        }
    }
    return ans;
}
int main()
{
    string s;
    cout<<"Enter the Roman Number: ";
    cin>>s;
    cout<<"The Integer is: ";
    cout<<romanToInt(s);
    return 0;


}