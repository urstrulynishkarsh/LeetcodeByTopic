#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int luckyNumber(vector<int> &arr)
{
    unordered_map<int,int> hash;
    for(int i=0;i<arr.size();i++)
    {
        hash[arr[i]]++;
    }
    int res=-1;
    for(auto it:hash)
    {
        if(it.first==it.second)
        {
            res=max(res,it.first);
        }
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    vector<int> array(n);
    cout<<"Enter the element in the Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

 

    cout<<luckyNumber(array);
}