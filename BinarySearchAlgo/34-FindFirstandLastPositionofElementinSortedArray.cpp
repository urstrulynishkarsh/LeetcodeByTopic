#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
int firstPosition(vector<int> nums,int &target)
{
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }
        else if(nums[mid]>target)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int lastPosition(vector<int> nums,int &target)
{
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }
        else if(nums[mid]>target)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
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
    int target;
    cout<<"Enter the value of target: ";
    cin>>target;

    int firstposition=firstPosition(array,target);
    int lastposition=lastPosition(array,target);
    vector<int> result;
    result.push_back(firstposition);
    result.push_back(lastposition);
    for(int val: result)
    {
        cout<<val<<" ";
    }



}