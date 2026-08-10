#include <iostream>
#include <list>
using namespace std;
void printList(list<int> l)
{
    while (!l.empty())
    {
        cout << l.front() << " ";
        l.pop_front();
    }
    cout << endl;
}
int main()
{
    list<int> l;
    l.push_front(2);
    l.push_front(1);
    l.push_back(3);
    l.push_back(4);
    cout << "\nOriginal list: ";
    printList(l);
    cout << "\nFront ELement: " << l.front() << endl;
    cout << "\nBack ELement: " << l.back() << endl;
    cout << "\nList Size: " << l.size() << endl;
    l.remove(3);
    cout << "\nAfter remove(3): ";
    printList(l);
    l.reverse();
    cout << "\nAfter reverse(): ";
    printList(l);
    l.sort();
    cout << "\nAfter sort(): ";
    printList(l);
    if (l.empty())
    {
        cout << "\nList is Empty." << endl;
    }
    else
    {
        cout << "\nList is Not Empty." << endl;
    }
    return 0;
}