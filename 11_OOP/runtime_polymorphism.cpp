#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound.\n";
    }
};
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog Barks.\n";
    }
};
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat Meows.\n";
    }
};
int main()
{
    Dog d;
    Cat c;
    Animal *ptr;
    ptr = &d;
    ptr->sound();
    ptr = &c;
    ptr->sound();
    return 0;
}