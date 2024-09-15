#include <iostream>
using namespace std;
class Calculator
{
    float op1,op2;
    char op;
    int res;
    public:
    void get_data()
    {
        cin>>op1>>op>>op2;
    }
    int show_result()
    {
        switch(op)
        {
            case '+':
            res=op1+op2;
            break;
            case '-':
            res=op1-op2;
            break;
            case '*':
            res=op1+op2;
            break;
            case '/':
            res=op1+op2;
            break;
        }
        return res;
    }

};
int main()
{
    Calculator obj;
    obj.get_data();
    cout<<obj.show_result();
}