#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int TopDownApproach(vector<int> &nums, int curr, int prev,vector<vector<int> > &dp,int n)
{
    if(curr==n)
    {
        return 0;
    }
    if(dp[curr][prev+1]!=-1)
    {
        return dp[curr][prev+1];
    }

    // inclusion
    int take=0;
    if(prev==-1 || nums[curr]>nums[prev])
    {
        take=1+TopDownApproach(nums,curr+1,curr,dp,n);
    }
    // exclusion
    int nottake=0+TopDownApproach(nums,curr+1,prev,dp,n);

    return dp[curr][prev+1]=max(take,nottake);

}
int LIS(vector<int> &nums)
{
    int n=nums.size();
    int prev=-1;
    int curr=0;
    vector<vector<int> >dp(n,vector<int> (n+1,-1));
    return TopDownApproach(nums,curr,prev,dp,n);
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
    cout<<LIS(array);
}