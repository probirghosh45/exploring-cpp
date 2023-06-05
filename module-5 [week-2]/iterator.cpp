#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin >> s;
    for (int i = 0; i < s.size() ; i++)
    {
        cout << s [i] <<" ";
    }
    
    cout << endl;
    cout << *s.begin()<< endl;
    cout << *s.end() << endl;
    cout << *(s.end() - 2) << endl;

    // string::iterator it;
    // for (string:: iterator it=s.begin(); it < s.end(); it++)
    for (auto it=s.begin(); it < s.end(); it++)
    {
        cout << *it << " " ;
    }

    return 0;
}