#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

void merge(vector<int> &nums, int s, int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    vector<int> v1(len1);
    vector<int> v2(len2);

    int k=s;
    for(int i=0;i<v1.size();i++)
    {
        v1[i]=nums[k++];
    }
    for(int i=0;i<v2.size();i++)
    {
        v2[i]=nums[k++];
    }
    int firstvectorIndex=0;
    int secondvectorIndex=0;
    int mainvectorIndex=s;
    while(firstvectorIndex<len1 && secondvectorIndex<len2)
    {
        if(v1[firstvectorIndex]<v2[secondvectorIndex])
        {
            nums[mainvectorIndex++]=v1[firstvectorIndex++];
        }
        else{
            nums[mainvectorIndex++]=v2[secondvectorIndex++];
        }
    }
    while(firstvectorIndex<len1)
    {
        nums[mainvectorIndex++]=v1[firstvectorIndex++];
        
    }
    while(secondvectorIndex<len2)
    {
        nums[mainvectorIndex++]=v2[secondvectorIndex++];
    }
}
void mergeSort(vector<int> &nums, int s, int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=s+(e-s)/2;
    mergeSort(nums,mid+1,e);
    mergeSort(nums,s,mid);
    merge(nums,s,e);
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
    mergeSort(array,s,e);
    for(int num:array)
    {
        cout<<num<<" ";
    }
}