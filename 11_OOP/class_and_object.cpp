#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int rollno;
    float marks;
    void info()
    {
        cout << "Name: " << name << "\n";
        cout << "Roll no.: " << rollno << "\n";
        cout << "Marks: " << marks << "\n";
    }
};
int main()
{
    Student s1;
    s1.name = "Atharav";
    s1.rollno = 146;
    s1.marks = 99.8;
    s1.info();
    return 0;
}