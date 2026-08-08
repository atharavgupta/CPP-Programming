#include <iostream>
using namespace std;
class Numbers
{
public:
    // int num1;
    // int num2;
    // int num3;
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    double add(double a, double b)
    {
        return a + b;
    }
    // void info()
    // {
    //     cout << "Result: " << n1.add();
    // }
};
int main()
{
    Numbers n1;
    cout << "Sum of two integers: " << n1.add(2, 3) << "\n";
    cout << "Sum of three integers: " << n1.add(2, 3, 4) << "\n";
    cout << "Sum of two decimal numbers: " << n1.add(2.5, 3.5) << "\n";
    return 0;
}