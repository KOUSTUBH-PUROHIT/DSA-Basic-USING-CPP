#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of elements you want to enter :"<<endl;
    cin>>n;
    
    int arr[n];

    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<" ,";
    }
    
    return 0;
}