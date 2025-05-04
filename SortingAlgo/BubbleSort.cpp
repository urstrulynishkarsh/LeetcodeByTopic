#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

// Time Complexity O(N^2)
// Space Complexity O(1)
void bubbleSort(vector<int> &nums)
{
    for(int i=0;i<nums.size()-1;i++)
    {
        bool flag=false;
        for(int j=0;j<nums.size()-i-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                flag=true;
                swap(nums[j],nums[j+1]);
            }
        }
        if(flag==false)
        {
            break;
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
    bubbleSort(array);
    for(int num:array)
    {
        cout<<num<<" ";
    }
}