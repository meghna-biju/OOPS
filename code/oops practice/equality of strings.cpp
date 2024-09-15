#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    int result = strcmp(str1, str2);
    if (result == 0)
        cout << "Strings are equal." << endl;
    else
        cout<<"Strings are not equal"<<endl;
}
   
