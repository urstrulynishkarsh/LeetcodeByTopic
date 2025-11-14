#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int maxConsecutiveOne(vector<int> &nums,int &k)
{
    int l=0,r=0,maxlength=0,n=nums.size(),zeroes=0;
    while(r<n)
    {
        if(nums[r]==0)
        {
            zeroes++;
        }
        if(zeroes>k)
        {  
            if(nums[l]==0)
            {
                zeroes--;
            }
            l++;
        }
        if(zeroes<=k)
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
    vector<int> nums(n);
    cout<<"Enter the element of vector: ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int k;
    cout<<"Enter the size of k: ";
    cin>>k;

    cout<<maxConsecutiveOne(nums,k);
}