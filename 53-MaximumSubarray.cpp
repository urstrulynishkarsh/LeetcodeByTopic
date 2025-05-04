#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int KadaneAlgo(vector<int> &nums)
{
    int sum=0;
    int maxi=nums[0];
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        maxi=max(maxi,sum);
        if(sum<=0)
        {
            sum=0;
        }
    }
    return maxi;
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
    cout<<KadaneAlgo(array);
}