#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

void insertionSort(vector<int> &nums)
{
   for(int i=1;i<nums.size();i++)
   {
        int value=nums[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(nums[j]>value)
            {
                nums[j+1]=nums[j];
            }
            else{
                break;
            }
        }
        nums[j+1]=value;
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
    insertionSort(array);
    for(int num:array)
    {
        cout<<num<<" ";
    }
}