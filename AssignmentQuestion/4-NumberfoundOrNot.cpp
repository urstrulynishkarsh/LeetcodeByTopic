#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the number to be found: ";
    cin>>target;
    int position=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            position=i;
            break;
        }
    }
    if(position==-1)
    {
        cout<<"Number not found in the array."<<endl;
    }
    else
    {
        cout<<"Number found at index: "<<position<<endl;
    }
}