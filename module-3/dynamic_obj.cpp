#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    // constructor
    Student(int rollData, int classData, int sectionData, char *n)
    {
        roll = rollData;
        cls = classData;
        section = sectionData;
        strcpy(name, n);
    }
};


int main()
{

    char name[100] = "Probir Ghosh";
    Student* probir = new Student (26,07,'D',name);  // if constructor available


    // Student probir (26,07,'D',name);
    // // Student* probir = 
    // new Student;

    // cout << probir-> roll << endl;


    // int* a = new int;
    // *a = 10;

    // cout << *a << endl;

    //  cout << probir-> roll << endl;
     cout << (*probir).roll << endl;
     cout << (*probir).name << endl;
     // (*probir).roll / probir->roll [Same]

     delete probir;
     cout << (*probir).name << endl;
     cout << (*probir).roll << endl;
     cout << probir -> roll << endl;

  






    return 0;
    
}