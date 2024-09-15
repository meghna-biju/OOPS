#include <iostream>
using namespace std;
int main()
{
    char s[100];
    int i,j;
    cout<<"Enter string: ";
    cin>>s;
    int cnt=0;
    for(i=0;s[i]!='\0';i++)
    {
    cnt++;
    }
    char srev[cnt];
    for(i=0;i<cnt;i++)
    srev[i]=s[cnt-i-1];
    srev[i]='\0';
    cout<<"Secret code: ";
    for(int i=0;i<cnt;i+=2)
    {
    cout<<srev[i];
    }
    
}