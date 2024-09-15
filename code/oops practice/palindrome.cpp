#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    char str[100];
    int len, i, isPalindrome = 1;
    cout << "Enter a string: ";
    cin >> str;
    for (len = 0; str[len] != '\0'; len++);
    for (i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
}
