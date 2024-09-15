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
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int *ptr=new int[n];
    int i,j,k,l;
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    int start=ptr[0];
    int end=ptr[1];
    int pred=ptr[0];
    int ranges=1;
    for(i=0;i<n;i++)
    {
        int current=ptr[i];
        if(current>pred&&current!=ptr[i+1]&&i!=n-1)
        {
            ranges++;
        }
        else if(current>pred&&i==n-1)
        {
            ranges++;
        }
        else if(ptr[i]!=ptr[i-1]&&current==ptr[i+1]&&i!=n-1&&i!=0)
        {
            ranges++;
        }
        else if(current==pred&&i>1&&ptr[i-2]==ptr[i-1])
        {
            ranges++;
        }
        pred=current+1;
    }
    int **holder=new int*[ranges];
    for(i=0;i<ranges;i++)
    {
        holder[i]=new int[2];
    }
    ranges=0;
    for(i=0;i<n;i++)
    {
        int current=ptr[i];
        if(current>pred&&current!=ptr[i+1]&&i!=n-1)
        {
            holder[ranges][0]=start;
            holder[ranges][1]=end;
            ranges++;
            start=ptr[i];
        }
        else if(current>pred&&i==n-1)
        {
            holder[ranges][0]=start;
            holder[ranges][1]=end;
            ranges++;
            start=ptr[i];
        }
        else if(ptr[i]!=ptr[i-1]&&current==ptr[i+1]&&i!=n-1&&i!=0)
        {
            holder[ranges][0]=start;
            holder[ranges][1]=end;
            ranges++;
            start=ptr[i];
        }
        else if(current==pred&&i>1&&ptr[i-2]==ptr[i-1])
        {
            holder[ranges][0]=start;
            holder[ranges][1]=end;
            ranges++;
            start=ptr[i];
        }
        pred=current+1;
        end=ptr[i];
    }
    holder[ranges][0]=start;
    holder[ranges][1]=end;
    cout<<"The ranges are: "<<endl;
    for(i=0;i<=ranges;i++)
        {
            if(holder[i][0]==holder[i][1])
            {
                cout<<holder[i][0]<<endl;
            }
            else
            {
                cout<<holder[i][0]<<"->"<<holder[i][1]<<endl;
            }
        }
}