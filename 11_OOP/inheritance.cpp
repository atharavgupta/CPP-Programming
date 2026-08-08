#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    int rollno;
    float marks;
    Student()
    {
        name = "Atharav";
        age = 20;
        rollno = 12;
        marks = 99;
    }
    void info()
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Roll no.: " << rollno << "\n";
        cout << "Marks: " << marks << "\n";
    }
};
int main()
{
    Student s1;
    s1.info();
    return 0;
}