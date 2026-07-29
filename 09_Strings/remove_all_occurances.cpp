#include <iostream>
using namespace std;
string removeOccurrences(string str, string part)
{
    while (str.length() > 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}
int main()
{
    string part;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    part = "abc";
    str = removeOccurrences(str, part);
    cout << "\nThe string after removing all occurences is: " << str << "\n";
    return 0;
}