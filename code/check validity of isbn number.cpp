#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int check=n%10;
    n=n/10;
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum+=(n%10);
        n=n/10;
    }
    if(sum%10==check)
    cout<<"Valid ISBN Number"<<endl;
    else
    cout<<"Invalid ISBN Number"<<endl;
}