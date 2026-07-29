#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int check(string str)
{
    int flag = 1;
    int start = 0;
    int end = str.length() - 1;
    while (start < end)
    {
        if (!isalnum(str[start]))
        {
            start++;
        }
        else if (!isalnum(str[end]))
        {
            end--;
        }
        else
        {
            if (tolower(str[start]) != tolower(str[end]))
            {
                flag = 0;
                break;
            }
            start++;
            end--;
        }
    }
    return flag;
}
int main()
{
    int flag;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    flag = check(str);
    if (flag == 1)
    {
        cout << "Entered string is a palindrome.";
    }
    else
    {
        cout << "Entered string is not a palindrome.";
    }
    return 0;
}