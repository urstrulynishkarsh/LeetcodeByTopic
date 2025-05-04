#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int KthLargestElement(vector<int> &nums,int k)
{
    priority_queue<int,vector<int>, greater<int> > pq;
    for(int i=0;i<nums.size();i++)
    {
        pq.push(nums[i]);
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    return pq.top();
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

    int target;
    cout<<"Enter the Target: ";
    cin>>target;

    cout<<KthLargestElement(array,target);

}