#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

// int partitionAlgo(vector<int> &nums, int low, int high)
// {
//     int pivotelement=nums[low];
//     int i=low;
//     for(int j=i+1;j<=high;j++)
//     {
//         if(nums[j]<=pivotelement)
//         {
//             i=i+1;
//             swap(nums[j],nums[i]);
//         }
//     }
//     swap(nums[i],nums[low]);
//     return i;
// }

int partitionAlgo(vector<int> &nums, int s, int e)
{
    int pivotindex=s;
    int pivotelement=nums[s];

    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(nums[i]<=pivotelement)
        {
            count++;
        }
    }
    int rightindex=s+count;
    swap(nums[pivotindex],nums[rightindex]);
    pivotindex=rightindex;

    int i=s;
    int j=e;

    while(i<pivotindex && j>pivotindex)
    {
        while(nums[i]<=pivotelement)
        {
            i++;
        }
        while(nums[j]>pivotelement)
        {
            j--;
        }
        if(i<pivotindex && j>pivotindex)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    return pivotindex;
}
void quickSort(vector<int> &nums, int s, int e)
{
   if(s>=e)
   {
        return;
   }
   int p=partitionAlgo(nums,s,e);
   quickSort(nums,s,p-1);
   quickSort(nums,p+1,e);
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