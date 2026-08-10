#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "\nOriginal Stack: ";
    printStack(s);
    cout << "\nTop ELement: " << s.top() << endl;
    cout << "\nStack Size: " << s.size() << endl;
    s.pop();
    cout << "\nAfter pop(): ";
    printStack(s);
    if (s.empty())
    {
        cout << "\nStack is Empty." << endl;
    }
    else
    {
        cout << "\nStack is Not Empty." << endl;
    }
    return 0;
}