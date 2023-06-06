#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of elements you want to enter in array 1 :"<<endl;
    cin>>n;
    
    int m;
    cout<<"Enter the no. of elements you want to enter in array 2 :"<<endl;
    cin>>m;
    
    int arr[n];
    int arr1[m]; 

    cout<<"Enter Elements of array 1 : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Elements of arrar 2 : "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }

    unordered_set<int> unionarr;
    
    for(int i=0;i<n;i++)
    {
        unionarr.insert(arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        unionarr.insert(arr1[i]);
    }
    
    cout<<"Array we get after union is :"<<endl;
    for(int num : unionarr)
    {
        cout<<num<<" ";
    }
    
    return 0;
}