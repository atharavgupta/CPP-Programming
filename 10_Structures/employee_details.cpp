#include <iostream>
using namespace std;
struct employee
{
    string name;
    int eID;
    float salary;
};
int main()
{
    int i;
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    struct employee s[n];
    for (i = 0; i < n; i++)
    {
        cout << "\n\nEnter the details of employee " << i + 1 << "\n";
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter eID no.: ";
        cin >> s[i].eID;
        cout << "Enter salary: ";
        cin >> s[i].salary;
    }
    cout << "\n==========X==========";
    for (i = 0; i < n; i++)
    {
        cout << "\n\nThe details of employee " << i + 1 << " is:\n";
        cout << "Name: " << s[i].name << "\n"
             << "eID no.: " << s[i].eID << "\n"
             << "salary: " << s[i].salary;
    }
    return 0;
}