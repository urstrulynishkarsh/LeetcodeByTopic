#include<iostream>
using namespace std;

void resultedArray(int arr1[],int arr2[],int resultArr[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        resultArr[i]=arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        resultArr[n+i]=arr2[i];
    }
}
int main()
{
    int n,m;
    cout<<"Enter size of first array: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter elements of first array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of second array: ";
    cin>>m;
    int arr2[m];
    cout<<"Enter elements of second array: ";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    int totalSize=n+m;
    int resultArray[totalSize];

    resultedArray(arr1,arr2,resultArray,n,m);

    for(int i=0;i<totalSize;i++)
    {
        cout<<resultArray[i]<<" ";
    }
    cout<<endl;

}