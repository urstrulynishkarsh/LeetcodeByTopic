#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int fruitsintobasket(vector<int> &fruits)
{
    int l=0,r=0,maxlength=0,n=fruits.size();
    unordered_map<int,int> hashmap;

    while(r<n)
    {
        // create entry into map
        hashmap[fruits[r]]++;
        if(hashmap.size()>2)
        {
            hashmap[fruits[l]]--;
            if(hashmap[fruits[l]]==0)
            {
                hashmap.erase(fruits[l]);
            }
            l++;
        }
        if(hashmap.size()<=2)
        {
            int len=r-l+1;
            maxlength=max(maxlength,len);
        }
        r++;
    }
    return maxlength;
}

int main()
{
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int> fruits(n);
    cout<<"Enter the element of vector: ";
    for(int i=0;i<n;i++)
    {
        cin>>fruits[i];
    }

    cout<<fruitsintobasket(fruits);
}