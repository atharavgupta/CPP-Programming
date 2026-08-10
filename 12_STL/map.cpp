#include <iostream>
#include <map>
using namespace std;
void printMap(map<string, int> m)
{
    for (auto p : m)
    {
        cout << p.first << " -> " << p.second << endl;
    }
}
int main()
{
    map<string, int> m;
    m["TV"] = 100;
    m["LAPTOP"] = 120;
    m["FAN"] = 50;
    m["FRIDGE"] = 80;
    m["AC"] = 110;
    cout << "\nOriginal Map:\n"
         << endl;
    printMap(m);
     cout << "\nMap Size: " << m.size() << endl;
    m.erase("FAN");
    cout << "\nAfter erase(FAN)\n:"
    << endl;
    printMap(m);
    cout << "\nMap Size: " << m.size() << endl;
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
        cout << "\nMap is Empty." << endl;
    }
    else
    {
        cout << "\nMap is Not Empty." << endl;
    }
    return 0;
}