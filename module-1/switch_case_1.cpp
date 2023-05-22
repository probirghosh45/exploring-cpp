#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;

    switch (i)
    {
    case 0:
        cout << "Zero";
        break;

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    case 3:
        cout << "Three";
        break;

    case 4:
        cout << "Four";
        break;

    default:
        cout << "Unknown";
    }

    return 0;
}
