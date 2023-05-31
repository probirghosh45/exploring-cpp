#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student probir;

    probir.roll = 100;
    probir.cls = 9;
    probir.section = 'B';
    char nm[100] = "Probir Ghosh";
    strcpy(probir.name, nm);

    Student shakil;
    shakil.roll = 150;
    shakil.cls = 10;
    shakil.section = 'A';
    char nm2[100] = "Shakil Khan";
    strcpy(shakil.name, nm2);
     
    cout << probir.name << endl; 
    return 0;
}