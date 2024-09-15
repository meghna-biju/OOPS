#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str[100], result[100];
    int i, j = 0;
    cout << "Enter a string: ";
    cin >> str;
    for (i = 0; str[i] != '\0'; i++) 
    {
        char lower = tolower(str[i]);
        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') 
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    cout << "String after removing vowels: " << result << endl;
}
