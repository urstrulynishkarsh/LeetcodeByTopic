#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int singleNumber(vector<int> &nums)
{
   int ans=0;
   for(int i=0;i<nums.size();i++)
   {
        
        ans^=nums[i];
   }
   return ans;
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
    cout<<singleNumber(array);
}