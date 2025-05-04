#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int s=0;
    int e=nums.size()-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
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
    cout<<"Enter the Target: ";
    cin>>target;

    cout<<binarySearch(array,target);
}