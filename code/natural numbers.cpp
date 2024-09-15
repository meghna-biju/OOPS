#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter value of k: ";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        if(i<k)
        arr[i]=i+1;
        else
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}