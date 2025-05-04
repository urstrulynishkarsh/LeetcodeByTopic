#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
int findPeakElement(vector<int>& nums) {
    int s=0;
    int e=nums.size()-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(nums[mid]<nums[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
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
    cout<<findPeakElement(array);



}