#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }

    int *b = new int[8];

    for (int i = 0; i < 6; i++)
    {
        b[i] = a[i];
    }

    b[6] = 35;
    b[7] = 40;

    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;

    // "a" array's availability checking
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    // delete the array
    delete[] a;

    // "a" array not available 
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}