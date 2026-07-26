#include <iostream>
using namespace std;
void swapNumber(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    swapNumber(&n1, &n2);
    cout << "The value of n1 and n2 after swapping is:\n";
    cout << "n1 = " << n1 << " and n2 = " << n2;
    return 0;
}