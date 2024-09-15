#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    char str[100], word[100], temp[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Enter word to remove: ";
    cin >> word;

    int i = 0, j = 0, k, word_len = strlen(word), found;
    while (str[i] != '\0') {
        found = 1;
        for (k = 0; k < word_len; k++) {
            if (str[i + k] != word[k]) {
                found = 0;
                break;
            }
        }
        if (found && (str[i + k] == ' ' || str[i + k] == '\0')) {
            i += word_len;
        } else {
            temp[j++] = str[i++];
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
    cout << "String after removing word: " << str << endl;
}
