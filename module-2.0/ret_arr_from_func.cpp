#include <bits/stdc++.h>
using namespace std;

int* fun()
{
    // int arr[5]; // static array => [Segmentation fault]

    int *arr = new int [5]; // dynamic array

    for (int i = 0; i < 5; i++) 
    {
        cin >> arr[i];
    }

    return arr;
}

int main()
{

    int *arr = fun();

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // array deleted !
    delete [] arr;

    // array's availability check -
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}