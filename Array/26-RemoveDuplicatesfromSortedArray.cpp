#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

int removeDuplicate(vector<int> &nums)
{
    int i=1;
    int j=0;
    while(i<nums.size())
    {
        if(nums[i]==nums[j])
        {
            i++;
        }
        else{
            nums[++j]=nums[i++];
        }
    }
    return j-0+1;
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
    cout<<removeDuplicate(array);
}