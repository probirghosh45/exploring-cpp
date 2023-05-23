#include <bits/stdc++.h>
using namespace std;
int main()
{   
    // integer data type syntax
    int *a  = new int ;
    *a = 4.75;
    cout << "Value of a " << *a << endl;  
    cout << "Memory Address of a " << a << endl; 

    // float data type syntax
    float *b  = new float ;
    *b = 4.75;
    cout << "Value of b " << *b << endl;  
    cout << "Memory Address of b " << b << endl; 
    return 0;
}