#include<iostream>
#include<conio.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<math.h>
using namespace std; 
int main()
{
    int a;
    cout<<"Enter number of elements : ";
    cin>>a;
    float val=sqrt(1+8*a);
    int val2=(int)(val);
    if(val==val2)
    {
    }
    else
    {
        cout<<"Invalid dimension";
        exit(0);
    }
    int n=(-1+val2)/2;
    int *ptr=new int[a];
    int i,j,k;
    cout<<"Enter elements : ";
    for(i=0;i<a;i++)
    {
        cin>>ptr[i];
    }
    int min=ptr[0];
    int *ans=new int[n];
    int count=0;
    for(i=1;i<=n;i++)
    {
        min=ptr[count];
        for(j=0;j<i;j++)
        {
            if(ptr[count]<=min)
            {
                min=ptr[count];
            }
            count++;
        }
        ans[i-1]=min;
    }
    
    cout<<"The mimimum path sum from top to bottom is  ";
    int sum=0;
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<"+";
        sum+=ans[i];
    }
    cout<<"="<<sum;
}