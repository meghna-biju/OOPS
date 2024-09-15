#include <iostream>
using namespace std;
int main()
{
    int *t,*r,p;
    float *si;
    t=(int*)malloc(1*sizeof(int));
    r=(int*)malloc(1*sizeof(int));
    si=(float*)malloc(1*sizeof(float));
    cout<<"Enter simple interest:  ";
    cin>>*si;
    cout<<"Enter rate of interest: ";
    cin>>*r;
    cout<<"Enter time: ";
    cin>>*t;
    p=(*si*100)/(*t*(*r));
    cout<<"The original amount is: "<<p;
    free(t);
    free(r);
    free(si);
}