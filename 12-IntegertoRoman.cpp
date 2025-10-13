#include<iostream>
#include<vector>
using namespace std;

string integerToRoman(int num)
{
    vector<pair<int,string>> values={
        {1000,"M"},
        {900,"CM"},
        {500,"D"},
        {400,"CD"},
        {100,"C"},
        {90,"XC"},
        {50,"L"},
        {40,"XL"},
        {10,"X"},
        {9,"IX"},
        {5,"V"},
        {4,"IV"},
        {1,"I"}
    };
    string ans;
    for(auto &p:values)
    {
        while(num>=p.first)
        {
            ans+=p.second;
            num-=p.first;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The Roman numeral is: ";
    cout<<integerToRoman(n);
    return 0;


}