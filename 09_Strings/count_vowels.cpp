#include <iostream>
using namespace std;
int countVowels(string str)
{
    int count = 0;
    int i;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int count = countVowels(str);
    cout << "Total number of vowels in the string is: " << count;
    return 0;
}