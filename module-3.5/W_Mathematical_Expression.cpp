#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, result, total;
    char opr1, opr2;
    cin >> num1 >> opr1 >> num2 >> opr2 >> result;

    switch (opr1)
    {
    case '+':
        if (num1 + num2 == result)
        {
            cout << "Yes" << endl;
        }
        else
        {
            total = num1 + num2;
            cout << num1 << " + " << num2 << " = " << total << endl;
        }

        break;

    case '-':
        if (num1 - num2 == result)
        {
            cout << "Yes" << endl;
        }
        else
        {
            total = num1 - num2;
            cout << num1 << " - " << num2 << " = " << total << endl;
        }

        break;

    case '*':
        if (num1 * num2 == result)
        {
            cout << "Yes" << endl;
        }
        else
        {
            total = num1 * num2;
            cout << total << endl;
        }

        break;
    }
    return 0;
}