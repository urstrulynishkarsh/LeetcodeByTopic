#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int countHillsAndValley(vector<int> nums)
{
    int count=0;
    int left=0;
    for(int i=1;i<nums.size()-1;i++)
    {
        if(nums[i]!=nums[i+1])
        {
            if(nums[i]>nums[left] && nums[i]>nums[i+1] || nums[i]<nums[left] && nums[i]<nums[i+1])
            {
                count++;
            }
            left=i;
        }
    }
    return count;

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
    cout<<countHillsAndValley(array);
}