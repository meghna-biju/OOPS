#include <iostream>
using namespace std;
int main()
{
    int yr_budget[3][12],expenses[12]={0};
    for(int i=0;i<3;i++)
    {
    cout<<"Enter the expenses in each month of item: "<<i+1<<endl;
    for (int j=0;j<12;j++)
    cin>>yr_budget[i][j];
    }
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<3;j++)
        expenses[i]+=yr_budget[j][i];
        cout<<endl;
    }
    for(int i=0;i<12;i++)
    cout<<"Month-"<<i+1<<": "<<expenses[i]<<endl;
}
