#include<iostream>
#include<vector>
using namespace std;

int MissingNumber(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        int value=nums[mid];
        int index=mid;
        int diff=value-index;
        if(diff==0)
        {
            s=mid+1;
        }
        else if(diff==1)
        {
            ans=index;
            e=mid-1;
        }
    }
    if(ans==-1)
    {
        return nums.size();
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the element in the array: ";
    for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
    cout<<MissingNumber(nums);
}