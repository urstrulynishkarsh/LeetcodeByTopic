#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int StringTOATOI(string &str)
{
    int i=0;
    int num=0;
    int sign=1;
    while(str[i]==' ')
    {
        i++;
    }
    if(i<str.length() && (str[i]=='+'|| str[i]=='-'))
    {
        sign=str[i]=='+'?1:-1;
        i++;
    }
    while(i<str.length() && isdigit(str[i]))
    {
        if(num>INT_MAX/10 || (num==INT_MAX/10 && str[i]>'7'))
        {
            return sign==-1?INT_MIN:INT_MAX;
        }
        num=num*10+(str[i]-'0');
        i++;
    }
    return num*sign;
}
int main()
{
    string str;
    cout<<"Enter the String: ";
    getline(cin,str);
    cout<<StringTOATOI(str);
}