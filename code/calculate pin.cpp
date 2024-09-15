#include <iostream>
using namespace std;
int calculatePin(int n) 
{
    if (n == 1)
    return 1;
    else 
    return calculatePin(n - 1) + n;
}
int main() 
{
    int n;
    cout<<"Enter the number of customers: ";
    cin>>n;
    int pin = calculatePin(n);
    cout<<"PIN number for the first customer: "<<pin<<endl;
}
