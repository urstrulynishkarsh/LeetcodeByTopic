#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

double maximumAverageSubArray(vector<int> &nums,int &k)
{
    int i=0;
    int j=k-1;
    int sum=0;
    for(int y=i;y<=j;y++)
    {
        sum+=nums[y];
    }
    int maxSum=sum;
    j++;
    while(j<nums.size())
    {
        sum-=nums[i++];
        sum+=nums[j++];
        maxSum=max(maxSum,sum);
    }
    return maxSum/(double)k;
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

    cout<<maximumAverageSubArray(array,target);
}