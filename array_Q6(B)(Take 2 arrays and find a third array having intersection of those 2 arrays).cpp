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

    unordered_set<int> intersectionarr;
    
    for(int i=0;i<n;i++)
    {
        intersectionarr.insert(arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(intersectionarr.count(arr1[i]) > 0)
        {
            cout<<arr1[i]<<" ";
            intersectionarr.erase(arr1[i]);
        }
    }
    
    return 0;
}