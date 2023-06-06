#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "I am from Bhola";
    // cout << s << endl;

    // usage:1
    string s1("Ami Akane 😀 - Adriza Karmakar");
    cout << s1 << endl;

    // usage:2
    string s2("I am from Gazaria", 4); // printing string upto specific index;
    cout << s2 << endl;

    // usage:3
    string a = "I am from Bhola";
    string s3(a, 10); // print string from/after specific index
    cout << s3 << endl;

    // usage: 4
    string s4(5, 'P');
    //   string s4(5,'\0');
    cout << s4 << endl;

    return 0;
}