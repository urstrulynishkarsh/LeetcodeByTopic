#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

// int solveRecursion(vector<int> &nums,int index,  vector<int> &dp)
//     {
//         if(index>=nums.size())
//         {
//             return 0;
//         }
//         if(dp[index]!=-1)
//         {
//             return dp[index];
//         }
//         int inclusion=nums[index]+solveRecursion(nums,index+2,dp);
//         int exclusion=0+solveRecursion(nums,index+1,dp);
//         return dp[index]=max(inclusion,exclusion);
//     }
    int HouseRobber(vector<int>& nums) {

        // solution 1
        // int n=nums.size();
        // vector<int> dp(n+1,-1);
        // // return solveRecursion(nums,0,dp);

        // solution 2
        // int n=nums.size();
        // vector<int> dp(n+2,0);

        // for(int i=n-1;i>=0;i--)
        // {
        //     int inclusion=nums[i]+dp[i+2];
        //     int exclusion=0+dp[i+1];
        //     dp[i]=max(inclusion,exclusion);

        // }
        // return dp[0];


        // solution 3

        int next2=0;
        int next1=0;
        int n=nums.size();
        
        for(int i=n-1;i>=0;i--)
        {
            int inclusion=nums[i]+next2;
            int exclusion=0+next1;
            int curr=max(inclusion,exclusion);

            // shifting
            next2=next1;
            next1=curr;
        }
        return next1;


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
    cout<<HouseRobber(array);
}