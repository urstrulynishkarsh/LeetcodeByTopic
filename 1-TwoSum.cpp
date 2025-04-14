#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Complexity O(N^2)
// Space Complexity O(1)

// vector<int> twoSum(vector<int> &array,int &target)
// {
//     for(int i=0;i<array.size();i++)
//         {
//             for(int j=i+1;j<array.size();j++)
//             {
//                 if(array[i]+array[j]==target)
//                 {
//                     return {i,j};
//                 }
//             }
//         }
//         return {-1,-1};
// }


// Time Complexity O(N)
// Space Complexity O(N)

vector<int> twoSum(vector<int> &array,int &target)
{
    unordered_map<int,int> mp;
    for(int i=0;i<array.size();i++)
    {
        int complement=target-array[i];
        if(mp.count(complement))
        {
            return {mp[complement],i};
        }
        mp[array[i]]=i;
    }
    return {-1,-1};
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

    vector<int> result=twoSum(array,target);
    if(result[0]==-1)
    {
        cout<<"No Pair is Found"<<endl;
    }
    else
    {
        cout<<"Indices: "<<result[0]<<", "<<result[1]<<endl;
    }
  

}