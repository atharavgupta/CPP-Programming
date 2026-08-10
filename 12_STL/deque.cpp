#include <iostream>
#include <deque>
using namespace std;
void printDeque(deque<int> d)
{
    while (!d.empty())
    {
        cout << d.front() << " ";
        d.pop_front();
    }
    cout << endl;
}
int main()
{
    deque<int> d;
    d.push_front(2);
    d.push_front(1);
    d.push_back(3);
    d.push_back(4);
    cout << "\nOriginal Deque: ";
    printDeque(d);
    cout << "\nFront ELement: " << d.front() << endl;
    cout << "\nBack ELement: " << d.back() << endl;
    cout << "\nDeque Size: " << d.size() << endl;
    d.pop_front();
    cout << "\nAfter pop_front(): ";
    printDeque(d);
    d.pop_back();
    cout << "\nAfter pop_back(): ";
    printDeque(d);
    if (d.empty())
    {
        cout << "\nDeque is Empty." << endl;
    }
    else
    {
        cout << "\nDeque is Not Empty." << endl;
    }
    return 0;
}