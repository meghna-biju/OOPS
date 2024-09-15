#include <iostream>
#include <string>
using namespace std;
string convert(string s, int numRows) 
{
if (numRows == 1 || numRows >= s.length()) 
return s;
int len = s.length();
char* result = (char*)malloc(len + 1);
int index = 0;
int step = 2 * (numRows - 1);
for (int i = 0; i < numRows; i++) 
{
    for (int j = i; j < len; j += step) 
    {
        result[index++] = s[j];
        if (i != 0 && i != numRows - 1 && j + step - 2 * i < len)
        result[index++] = s[j + step - 2 * i];
    }
}
result[index] = '\0';
return result;
}
int main() 
{
string s1 = "PAYPALISHIRING";
int numRows;
cout<<"Enter number of rows: ";
cin>>numRows;
string result1=convert(s1, numRows);
cout<<result1;
return 0;
}