#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int i;
    int n;
    cout<<"Enter the no. of elements you want to enter in array:"<<endl;
    cin>>n;
    
    int array[n];
    
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    
    cout<<"Normal array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
        cout<<" ,";
    }
    cout<<endl;
    
    int end = 0;
    int temp;
    temp = array[n-1];
    
    for(i=n-1;i>0;i--)
    {
        array[i] = array[i-1];
    }
   
   array[0] = temp;
    
    cout<<"Circled array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
        cout<<" ,";
    } 
    
    return 0;
}