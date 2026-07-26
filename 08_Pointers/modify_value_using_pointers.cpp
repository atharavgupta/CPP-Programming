#include <iostream>
using namespace std;
void modifyNumber(int *a, int *b)
{
    *a *= *b;
}
int main()
{
    int n1, n2;
    int original_n1;
    cout << "Enter the initial value of n1: ";
    cin >> n1;
    cout << "Enter the number to multiply n1 by: ";
    cin >> n2;
    original_n1 = n1;
    cout << "The updated value of n1 is:\n";
    modifyNumber(&n1, &n2);
    cout << original_n1 << " X " << n2 << " = " << n1;
    return 0;
}