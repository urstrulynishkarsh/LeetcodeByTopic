#include<iostream>
using namespace std;

int countWays(int n, int k, vector<int> &dp)
{
    if(n==1)
    {
        return k;
    }
    if(n==2)
    {
        return (k+(k*(k-1)));
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    
    return dp[n]=(k-1)*(countWays(n-2,k,dp)+countWays(n-1,k,dp));

}
int main()
{
    int n,k;
    cout<<"Enter the value of pillar: ";
    cin>>n;
    cout<<"Enter the value of Color: ";
    cin>>k;

    vector<int> dp(n+1,-1);
    cout<<countWays(n,k,dp);

}