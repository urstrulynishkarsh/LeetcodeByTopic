#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int partitionAlgo(vector<int> &nums, int low, int high)
{
    int pivotelement=nums[low];
    int i=low;
    for(int j=i+1;j<=high;j++)
    {
        if(nums[j]<=pivotelement)
        {
            i=i+1;
            swap(nums[j],nums[i]);
        }
    }
    swap(nums[i],nums[low]);
    return i;
}
void quickSort(vector<int> &nums, int s, int e)
{
    if(s<e)
    {
        int m=partitionAlgo(nums,s,e);
        quickSort(nums,s,m-1);
        quickSort(nums,m+1,e);
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
    int s=0;
    int e=array.size()-1;
    quickSort(array,s,e);
    for(int num:array)
    {
        cout<<num<<" ";
    }
}