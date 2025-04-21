#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;
string ZigZagPattern(string &str,int &numrows);

// Time Complexity O(N)
// Space Complexity O(N)
int main()
{
    string str;
    cout<<"Enter the String: ";
    getline(cin,str);
    int numrows;
    cout<<"Enter the number of rows: ";
    cin>>numrows;

    string ans=ZigZagPattern(str,numrows);
    cout<<ans;

}

string ZigZagPattern(string &str,int &numrows){
    if(numrows==1)
    {
        return str;
    }
    int row=0;
    int i=0;
    bool direction=true;
    vector<string> zigZag(numrows);
    while(true)
    {
        if(direction)
        {
            while(i<str.length() && row<numrows)
            {
                zigZag[row++].push_back(str[i++]);
            }
            row=numrows-2;
        }
        else{
            while(i<str.length() && row>=0)
            {
                zigZag[row--].push_back(str[i++]);
            }
            row=1;
        }
        if(i>=str.length())
        {
            break;
        }
        direction=!direction;
    }
    string ans;
    for(int i=0;i<zigZag.size();i++)
    {
        ans+=zigZag[i];
    }
    return ans;
}
