#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int arr[100];
    int *ptr = arr;
    cout << "Enter the number of elemnts: ";
    cin >> n;
    cout << "Enter the elements in the array:\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << "The value at index " << i << " is: " << *ptr << "\n";
        ptr++;
    }
}