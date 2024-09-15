#include <iostream>
using namespace std;
int main() 
{
    char ch;
    do {
        int strength, r_is;
        string grade;
        cout << "Strength:";
        cin >> strength;
        cout << "Relevant IS:";
        cin >> r_is;
        if (strength == 27 && r_is== 12269)
        grade="53 Grade OPC";
        else if (strength == 23 && r_is== 8112)
        grade= "43 Grade OPC";
        else if (strength == 16 && r_is== 269)
        grade= "33 Grade OPC";
        else
        grade="Not classified";
        cout << "The grade of OPC is: " << grade << endl;
        cout << "Do you want to continue? (Y/N): ";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
}
