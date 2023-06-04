#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;   
    cout << s[0] << " " << s[1] <<endl; //nth element
    cout << s.at(3) << endl; // nth element
    cout << s.back() << endl; // last element
    cout << s.front() << endl;
    return 0;

}