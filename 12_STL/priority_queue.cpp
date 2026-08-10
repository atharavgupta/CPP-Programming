#include <iostream>
#include <queue>
using namespace std;
void printMaxHeap(priority_queue<int> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}
void printMinHeap(priority_queue<int, vector<int>, greater<int>> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    priority_queue<int> maxHeap;
    maxHeap.push(1);
    maxHeap.push(2);
    maxHeap.push(3);
    maxHeap.push(4);
    cout << "\nMax Heap: ";
    printMaxHeap(maxHeap);
    cout << "\nTop Element: " << maxHeap.top() << endl;
    cout << "\nHeap Size: " << maxHeap.size() << endl;
    maxHeap.pop();
    cout << "\nAfter pop(): ";
    printMaxHeap(maxHeap);
    if (maxHeap.empty())
    {
        cout << "\nMax Heap is Empty." << endl;
    }
    else
    {
        cout << "\nMax Heap is Not Empty." << endl;
    }
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(1);
    minHeap.push(2);
    minHeap.push(3);
    minHeap.push(4);
    cout << "\nMin Heap: ";
    printMinHeap(minHeap);
    cout << "\nTop Element: " << minHeap.top() << endl;
    cout << "\nHeap Size: " << minHeap.size() << endl;
    minHeap.pop();
    cout << "\nAfter pop(): ";
    printMinHeap(minHeap);
    if (minHeap.empty())
    {
        cout << "\nMin Heap is Empty." << endl;
    }
    else
    {
        cout << "\nMin Heap is Not Empty." << endl;
    }
    return 0;
}