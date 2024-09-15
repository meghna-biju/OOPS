#include <iostream>
#include <iomanip>
using namespace std;
float bmi(float height, float weight)
{
    return weight/(height*height);
}
int obese(float bmi)
{
    if(bmi>=30)
    {
        return true;
    }
    else
    return false;
}
int main()
{
    int n,count=0;
    cout<<"Enter number of persons: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        float h,w;
        float BMI;
        cout<<"Enter height and weight: ";
        cin>>h>>w;
        BMI=bmi(h,w);
        cout<<fixed<<setprecision(2)<<BMI<<endl;
        if(obese(BMI))
        count++;
    }
    cout<<"Percentage of obese people is: "<<count*100/n<<"%";
}