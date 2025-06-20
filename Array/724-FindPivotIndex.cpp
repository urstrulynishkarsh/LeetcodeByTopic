#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int PivotIndex(vector<int>& nums) {
    int leftsum=0;
    int rightsum=0;
    for(int i=0;i<nums.size();i++)
    {
        rightsum+=nums[i];
    }
    for(int i=0;i<nums.size();i++)
    {
        leftsum+=nums[i];
        if(leftsum==rightsum)
        {
            return i;
        }
        rightsum-=nums[i];
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
    cout<<PivotIndex(array);
}