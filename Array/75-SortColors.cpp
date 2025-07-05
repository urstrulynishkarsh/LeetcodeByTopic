#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

void sortColors(vector<int> &nums)
{
    int start=0,mid=0,end=nums.size()-1;
    while(mid<=end)
    {
        if(nums[mid]==0)
        {
            swap(nums[start++],nums[mid++]);
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else{
            swap(nums[mid],nums[end--]);
        }
    }
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
    sortColors(array);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}