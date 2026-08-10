#include <iostream>
#include <queue>
using namespace std;
void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << "\nOriginal  Queue: ";
    printQueue(q);
    cout << "\nFront ELement: " << q.front() << endl;
     cout << "\nBack ELement: " << q.back() << endl;
    cout << "\nQueue Size: " << q.size() << endl;
    q.pop();
    cout << "\nAfter pop(): ";
    printQueue(q);
    if (q.empty())
    {
        cout << "\nQueue is Empty." << endl;
    }
    else
    {
        cout << "\nQueue is Not Empty." << endl;
    }
    return 0;
}