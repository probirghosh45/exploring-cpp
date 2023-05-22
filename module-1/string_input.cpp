#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    // cin >> str;

    // in "C" - string input including spaces and Enter key Pressing Limitation
    // fgets(str, 100,stdin);
    // cout << str << endl;
    // cout << strlen(str);

    // Output :  Probir Ghosh & length : 13

    // in "C++" - string input including spaces and without Enter key Pressing Limitation
    cin.getline(str, 100);
    cout << str << endl;
    cout << strlen(str);
    // Output :  Probir Ghosh & length : 12
    
    return 0;
}
