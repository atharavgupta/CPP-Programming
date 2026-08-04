#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    float marks;
};
int main()
{
    int i;
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    struct student s[n];
    for (i = 0; i < n; i++)
    {
        cout << "\n\nEnter the details of student " << i + 1 << "\n";
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter roll no.: ";
        cin >> s[i].roll;
        cout << "Enter marks: ";
        cin >> s[i].marks;
    }
    cout << "\n==========X==========";
    for (i = 0; i < n; i++)
    {
        cout << "\n\nThe details of student " << i + 1 << " is:\n";
        cout << "Name: " << s[i].name << "\n"
             << "Roll no.: " << s[i].roll << "\n"
             << "Marks: " << s[i].marks;
    }
    return 0;
}