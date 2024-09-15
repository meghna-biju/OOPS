#include <iostream>
using namespace std;
int main()
{
    int yr,pin[4]={0};
    cout<<"Enter your birth year: ";
    cin>>yr;
    int year[4]={0};
    for(int i=3;i>=0;i--)
    {
        *(year+i)=yr%10;
        yr/=10;
    }
    for(int i=0;i<4;i++)
    {
            int sum=0,s=0;
            for(int j=0;j<=i;j++)
            {
                sum+=*(year+j);
            }
            for(int i=0;i<2;i++)
            {
                s+=sum%10;
                sum/=10;
            }
            *(pin+i)=s;
    }
    for(int i=0;i<4;i++)
    {
        cout<<*(pin+i);
    }
}