#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int rollno;
    float marks;
    Student()
    {
        name = "Atharav";
        rollno = 1;
        marks = 90;
    }
    Student(string name, int rollno, float marks)
    {
        this->name = name;
        this->rollno = rollno;
        this->marks = marks;
    }
    void info()
    {
        cout << "\nName: " << name << "\n";
        cout << "Roll no.: " << rollno << "\n";
        cout << "Marks: " << marks << "\n";
    }
};
int main()
{
    Student s1;
    s1.info();
    Student s2("Aman", 2, 91);
    s2.info();
    return 0;
}