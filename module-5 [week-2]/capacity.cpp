#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    cout << "Hello World" << endl;
    cout << "Size : " << s.size() << endl;
    cout << "Max size : " << s.max_size() << endl;
    cout << "Capacity : " << s.capacity() << endl;
    s.clear();
    cout << "Size [after clear] : " << s.size() << endl;

   //empty
    string s2 = "" ; // "" [empty]
    // s2.empty() function behind the scenes calculating the size of the string.
    if (s2.empty()) cout << "Empty String" << endl;
    else cout << "Not Empty" << endl;

    //resize the string

    string s3 ;
    cin >> s3;
    cout << s3 << endl;
    cout << s3.size() << endl;
    s3.resize(3);
    cout << s3<< endl;
    s3.resize(7,'*') ;
    cout << s3 << endl;


    return 0;
}


