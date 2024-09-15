#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int arr[100],n,pos,elem,ch;
    cout<<"Number of elements in the array: ";
    cin>>n;
    for (int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    cout<<"1 for insert, 2 for delete: ";
    cin>>ch;
    if(ch==1) 
    {
        cout<<"Enter position: ";
        cin>>pos;
        pos--; 
        if(pos>=n)
        {
            cout<<"Incorrect position"<<endl;
            exit(0);
        }
        cout<<"Enter the element to insert: ";
        cin>>elem;
        for (int i=n;i>pos;i--)
            arr[i]=arr[i-1];
        arr[pos]=elem;
        n++;
    } 
    else if(ch==2) 
    {
        cout<<"Enter position: ";
        cin>>pos;
        pos--;
        if(pos>=n)
        {
            cout<<"Incorrect position"<<endl;
            exit(0);
        }
        for (int i=pos;i<n-1;i++)
            arr[i]=arr[i+1];
        n--;
    }
    else
    {
    cout<<"Wrong choice"<<endl;
    exit(0);
    }
    for (int i=0;i<n;i++) 
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
}  

