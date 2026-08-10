#include <iostream>
#include <unordered_map>
using namespace std;
void printUnorderedMap(unordered_map<string, int> m)
{
    for (auto p : m)
    {
        cout << p.first << " -> " << p.second << endl;
    }
}
int main()
{
    unordered_map<string, int> m;
    m["TV"] = 200;
    m["LAPTOP"] = 120;
    m["FAN"] = 50;
    m["FRIDGE"] = 80;
    m["AC"] = 110;
    cout << "\nOriginal Unordered Map:\n"
         << endl;
    printUnorderedMap(m);
    cout << "\nUnordered Map Size: " << m.size() << endl;
    m.insert({"MOBILE", 70});
    cout << "\nAfter insert(MOBILE):\n"
         << endl;
    printUnorderedMap(m);
    cout << "\nUnordered Map Size: " << m.size() << endl;
    m.erase("FAN");
    cout << "\nAfter erase(FAN):\n"
         << endl;
    printUnorderedMap(m);
    cout << "\nUnordered Map Size: " << m.size() << endl;
    if (m.find("AC") != m.end())
    {
        cout << "\nAC Found!";
    }
    else
    {
        cout << "\nAC Not Found!";
    }
    cout << "\n\nCount of key LAPTOP: " << m.count("LAPTOP") << endl;
    cout << "\nCount of key REFRIGERATOR: " << m.count("REFRIGERATOR") << endl;
    if (m.empty())
    {
        cout << "\nUnordered Map is Empty." << endl;
    }
    else
    {
        cout << "\nUnordered Map is Not Empty." << endl;
    }
    return 0;
}