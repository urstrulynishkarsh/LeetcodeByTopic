#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

void selectionSort(vector<int> &nums)
{
    for(int i=0;i<nums.size()-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]<nums[minIndex])
            {
                minIndex=j;
            }
        }
        swap(nums[i],nums[minIndex]);
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
    selectionSort(array);
    for(int num:array)
    {
        cout<<num<<" ";
    }
}