#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> &v)
{
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "\nOriginal Vector: ";
    printVector(v);
    v.push_back(4);
    cout << "\nAfter push_back(4): ";
    printVector(v);
    v.pop_back();
    cout << "\nAfter pop_back: ";
    printVector(v);
    cout << "\nFront Element: " << v.front() << endl;
    cout << "\nBack Element: " << v.back() << endl;
    cout << "\nElement at Index 1: " << v.at(1) << endl;
    cout << "\nVector Size: " << v.size() << endl;
    cout << "\nVector Capacity: " << v.capacity() << endl;
    v.clear();
    cout << "\nAfter clear()" << endl;
    if (v.empty())
    {
        cout << "\nVector is Empty." << endl;
    }
    else
    {
        cout << "\nVector is Not Empty." << endl;
    }
    return 0;
}