//program to print minimum and maximum element from an array.

#include<iostream>
using namespace std;

int main()
{
    int n;
   
    cout<<"Enter the no. of elements you want to enter:"<<endl;
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter Elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    int min= arr[0];
    int max= arr[0];
    
    for(int i=0; i<n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    
    cout<<"Minimum element : "<<min<<endl;
    cout<<"Maximum element : "<<max<<endl;
    
    return 0;
}
