#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "World";

    // s1=s1+s2;
    // s1+=s2;
    // s1 = "HelloWorld";
    // s1.append(s2);
    s1.push_back('*');
    s1.pop_back(); // remove last element - Hello
    s1.pop_back(); // remove last element - Hell
    // s1.clear(); //clear the string
    cout<< s1   << endl;

    //assigning/replacing the string
    // s2 = "C++";
    s2.assign("Bangladesh");
    // s2.erase(6); // will be erased from index position 6 to last
    // s2.erase(6,2); // will be erased from index position 6 to next 2 characters
    s2.replace(6,2,"PK45");
    s1.insert(2,"Probir"); 

    cout << s2 << endl;
    cout << s1 << endl;


    return 0;
}