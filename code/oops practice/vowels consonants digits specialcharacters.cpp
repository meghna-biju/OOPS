#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char word[100];
    cout<<"Enter string: ";
    cin.getline(word,100);
    int v=0,c=0,d=0,ws=0;
    for(int i=0;word[i]!='\0';i++)
    {
        word[i]=tolower(word[i]);
        if(word[i]>='0' && word[i]<='9')
        d++;
        else if(isspace(word[i]))
        ws++;
        else if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
        v++;
        else
        c++;
    }
    cout<<"Number of:"<<endl;
    cout<<"Vowels:"<<v<<"\nConsonants: "<<c<<"\nDigits: "<<d<<"\nWhite space Characters: "<<ws<<endl;
    return 0;
}