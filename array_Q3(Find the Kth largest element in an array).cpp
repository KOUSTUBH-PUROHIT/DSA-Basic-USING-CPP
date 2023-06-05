#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the elements you want to enter: "<<endl;
    cin>>n;
    
    int arr[n],k;
    
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the value of K : "<<endl;
    cin>>k;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted array is : "<<endl;
     for(int i=0; i<n; i++)
    {
        cout<<arr[i];
        cout<<" ,";
    }
    cout<<endl;
    
    cout<<"Minimum Kth element is:"<<endl;
    cout<<arr[k-1];
    
    return 0;
}
