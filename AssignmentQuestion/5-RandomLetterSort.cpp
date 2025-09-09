#include<iostream>
using namespace std;

const int maxi=26;

void printRandomcharArray(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]='a'+rand()%maxi;
    }
}

void bubbleSort(char arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool flag=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=true;
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
        if(flag==false)
        {
            break;
        }
    }

  
}
int main()
{
    int n;
    cout<<"Enter the size of Char Array: ";
    cin>>n;
    char arr[n];
    printRandomcharArray(arr,n);

    cout<<"Char Array of random alphabet: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Sorting the char array
    bubbleSort(arr,n);
    cout<<"Sorted Char Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

