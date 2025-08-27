#include<iostream>
#include<vector>
using namespace std;

// int solveRecursion(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;
//     }
//     int ans=solveRecursion(n-1)+solveRecursion(n-2);
//     return ans;
// }

// int topDownApproch(int n,vector<int> &dp )
// {
//     dp[0]=0;
//     if(n==0)
//     {
//         return dp[0];
//     }
//     dp[1]=1;
//     if(n==1)
//     {
//         return dp[1];
//     }
//     if(dp[n]!=-1)
//     {
//         return dp[n];
//     }
//     return dp[n]=topDownApproch(n-1,dp)+topDownApproch(n-2,dp);

// }

// int bottomUpApproach(int n)
// {
//     vector<int> dp(n+1,-1);
//     dp[0]=0;
//     if(n==0)
//     {
//         return dp[0];
//     }
//     dp[1]=1;
//     if(n==1)
//     {
//         return dp[1];
//     }

//     for(int i=2;i<=n;i++)
//     {
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }


int spaceOptimization(int n)
{
    int prev=0;
    if(n==0)
    {
        return prev;
    }
    int curr=1;
    if(n==1)
    {
        return curr;
    }

    for(int i=2;i<=n;i++)
    {
       int ans=curr+prev;
       prev=curr;
       curr=ans;
    }

    return curr;
}
int fibonacci(int &n)
{
    // solution 1
    // return solveRecursion(n); 

    // solution 2
    // vector<int> dp(n+1,-1); 
    // return topDownApproch(n,dp);

    // solution 3
    // return bottomUpApproach(n);

    return spaceOptimization(n);

}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<fibonacci(n);
}