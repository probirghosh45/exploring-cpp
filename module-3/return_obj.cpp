#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int rollData, int classData, int sectionData, char *n)
    {
        roll = rollData;
        cls = classData;
        section = sectionData;
        strcpy(name, n);
    }
};

Student fun()
{
    char name[100] = "Probir Ghosh";
    Student p(45, 12, 'C', name);
    return p;
}

int main()
{

    Student probir = fun();
    cout << probir.roll << endl;
    cout << probir.section << endl;
    cout << probir.cls << endl;
    cout << probir.name << endl;
    return 0;
    
}