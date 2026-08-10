#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printVector(vector<int> v)
{
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v = {2, 3, 4, 7, 6, 9, 1, 8, 2};
    cout << "\nOriginal Vector: ";
    printVector(v);
    sort(v.begin(), v.end());
    cout << "\nAfter Sorting: ";
    printVector(v);
    reverse(v.begin(), v.end());
    cout << "\nAfter Reversing: ";
    printVector(v);
    cout << "\nMaximum Element: " << *max_element(v.begin(), v.end()) << endl;
    cout << "\nMinimum Element: " << *min_element(v.begin(), v.end()) << endl;
    if (find(v.begin(), v.end(), 8) != v.end())
    {
        cout << "\n8 Found!" << endl;
    }
    else
    {
        cout << "\n8 Not Found!" << endl;
    }
    cout << "\nCount of 2: " << count(v.begin(), v.end(), 2) << endl;
    sort(v.begin(), v.end());
    if (binary_search(v.begin(), v.end(), 5))
    {
        cout << "\n5 Found using Binary Search!" << endl;
    }
    else
    {
        cout << "\n5 Not Found!" << endl;
    }
    swap(v[0], v[1]);
    cout << "\nAfter swap(v[0], v[1]): ";
    printVector(v);
    sort(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    cout << "\nNext Permutation: ";
    printVector(v);
    sort(v.begin(), v.end());
    prev_permutation(v.begin(), v.end());
    cout << "\nPrevious Permutation: ";
    printVector(v);
    return 0;
}