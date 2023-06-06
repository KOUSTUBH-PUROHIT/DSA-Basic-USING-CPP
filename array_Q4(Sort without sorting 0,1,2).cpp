#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of elements you want to enter :"<<endl;
    cin>>n;
    
    int arr[n];
    int start=0;
    int mid = 0;
    int last = n-1;

    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    while (mid <= last) {
        switch (arr[mid]) {

        case 0:
            swap(arr[start++], arr[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[last--]);
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<" ,";
    }
    
    return 0;
}