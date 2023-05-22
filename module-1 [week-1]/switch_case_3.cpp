#include <iostream>
using namespace std;

int main()
{

    int i;
    cin >> i;
    
    switch (i%2)
    {
    case 0:
        cout << "Even Number" << endl;
        break;

    default:
        cout << "Odd Number" << endl;
        break;
    }
    return 0;
}

