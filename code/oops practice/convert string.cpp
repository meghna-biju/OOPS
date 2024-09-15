#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
        str[i] = '*';

    cout << "Converted string: " << str << endl;
}