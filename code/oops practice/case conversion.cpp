#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }

    cout << "String after case conversion: " << str << endl;
}