#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // stringstream ss(s);
    stringstream ss; 
    ss << s; //alternative
    string word;

    // ss >> word;
    // cout << word << endl; // printing 1st word
    // ss >> word;
    // cout << word << endl; // printing 2nd word

    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}

