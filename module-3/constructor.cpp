#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int rollData, int classData, int sectionData, char* n)
    {
        roll = rollData;
        cls = classData;
        section = sectionData;
        strcpy(name, n);
    };

};

int main()
{
    Student probir(45, 12, 'C', "PK");
    cout << probir.roll << endl;
    cout << probir.name << endl;
    return 0;
}