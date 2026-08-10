#include <iostream>
#include <set>
using namespace std;
void printSet(set<int> s)
{
    for (int element : s)
    {
        cout << element << " ";
    }
    cout << endl;
}
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(4);
    cout << "\nOriginal Set: ";
    printSet(s);
    cout << "\nSet Size: " << s.size() << endl;
    s.erase(3);
    cout << "\nAfter erase(3): ";
    printSet(s);
    if (s.find(2) != s.end())
    {
        cout << "\n2 Found!";
    }
    else
    {
        cout << "\n2 Not Found!";
    }
    cout << "\n\nCount of 2: " << s.count(2) << endl;
    cout << "\nCount of 5: " << s.count(5) << endl;
    if (s.empty())
    {
        cout << "\nSet is Empty." << endl;
    }
    else
    {
        cout << "\nSet is Not Empty." << endl;
    }
    return 0;
}