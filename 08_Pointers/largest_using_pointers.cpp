#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    int *ptr1 = &n1;
    int *ptr2 = &n2;
    if (*ptr1 > *ptr2)
    {
        cout << n1 << " is greater than " << n2;
    }
    else
    {
        cout << n2 << " is greater than " << n1;
    }
    return 0;
}