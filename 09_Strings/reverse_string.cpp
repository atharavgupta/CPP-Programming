#include <iostream>
using namespace std;
string reverseString(string str)
{
    int start = 0;
    int end = str.length() - 1;
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    return str;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "\nOriginal string: ";
    cout << str;
    str = reverseString(str);
    cout << "\nReversed string: ";
    cout << str;
    return 0;
}
