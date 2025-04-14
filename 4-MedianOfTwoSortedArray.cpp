#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

// Time Complexity O(n+m)
// Space Complexity O(n+m)
// double medianOfTwoSortedArray(vector<int> &arr1, vector<int> &arr2)
// {
//     int n=arr1.size();
//     int m=arr2.size();
//     int i=0;
//     int j=0;
//     vector<int> result;
//     while(i<n && j<m)
//     {
//         if(arr1[i]<=arr2[j])
//         {
//             result.push_back(arr1[i++]);
//         }
//         else{
//             result.push_back(arr2[j++]);
//         }
//     }
//     while(i<n)
//     {
//         result.push_back(arr1[i++]);
//     }
//     while(j<m)
//     {
//         result.push_back(arr2[j++]);
//     }

//     int totalsize=result.size();
//     if(totalsize&1)
//     {
//         return result[totalsize/2];
//     }
//     else{
//         return (result[totalsize/2-1]+result[totalsize/2])/2.0;
//     }
// }

// Time Complexity O(Log(n+m))
// Space Complexity O(1)
double medianOfTwoSortedArray(vector<int> &arr1, vector<int> &arr2)
{
    int n1=arr1.size();
    int n2=arr2.size();

    // perform on small array
    if(n1>n2)
    {
        return medianOfTwoSortedArray(arr2,arr1);
    }

    int low=0;
    int high=n1;
    int left=(n1+n2+1)/2;
    int totalsize=n1+n2;
    while(low<=high)
    {
        int mid1=low+(high-low)/2;
        int mid2=left-mid1;
        int l1=INT_MIN,l2=INT_MIN;
        int r1=INT_MAX,r2=INT_MAX;


        if(mid1<n1)
        {
            r1=arr1[mid1];
        }
        if(mid2<n2)
        {
            r2=arr2[mid2];
        }
        if(mid1-1>=0)
        {
            l1=arr1[mid1-1];
        }
        if(mid2-1>=0)
        {
            l2=arr2[mid2-1];
        }

        if(l1<=r2 && l2<=r1)
        {
            if(totalsize&1)
            {
                return max(l1,l2);
            }
            return ((double)(max(l1,l2)+min(r1,r2)))/2.0;
        }
        else if(l1>r2)
        {
            high=mid1-1;
        }
        else{
            low=mid1+1;
        }
    }
    return 0;
}
int main()
{
    int n,m;
    cout<<"Enter the Size of First Array: ";
    cin>>n;
    vector<int> arr1(n);
    cout<<"Enter the element in the Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter the Size of Second Array: ";
    cin>>m;
    vector<int> arr2(m);
    cout<<"Enter the element in the Array: ";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    cout<<(double)medianOfTwoSortedArray(arr1,arr2);

}