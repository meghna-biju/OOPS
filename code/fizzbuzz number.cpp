#include<iostream>
#include <string>
using namespace std;
string FizzBuzz(int n)
{
    if(n%3==0 && n%5==0)
    return "FizzBuzz";
    else if(n%3==0)
    return "Fuzz";
    else if(n%5==0)
    return "Buzz";
    else 
    return to_string(n);
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    cout<<FizzBuzz(i)<<" ";
}
