#include<iostream>
#include<conio.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int *ptr=new int[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    int pos=0;
    
    int steps=0;
    while(pos!=n-1)
    {
        int jump=ptr[pos];
        if(pos+jump>=n-1)
        {
            steps++;
            break;
        }
        int max=ptr[pos+1];
        int ind=pos+1;
        for(i=pos+1;i<=pos+jump;i++)
        {
            if(ptr[i]>=((n-1)-i))
            {
                steps+=2;
                goto ending;
            }
        }
        for(i=pos+1;i<=pos+jump;i++)
        {
            if(ptr[i]==((n-1)-i))
            {
                steps+=0;
                break;
            }
            if(ptr[i]>=max)
            {
                max=ptr[i];
                ind=i;
            }
            /**
             
            **/
           
        }

        pos=ind;
        steps++;
    }
    ending:
    cout<<steps;
}