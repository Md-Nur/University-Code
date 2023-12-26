#include <iostream>

using namespace std;

class GrandParent
{
public:
    GrandParent()
    {
        cout << "Grand Parent" << endl;
    }
};

class Parent1 : public GrandParent
{
public:
    Parent1()
    {
        cout << "Parent 1" << endl;
    }
};

class Parent2 : public GrandParent
{
public:
    Parent2()
    {
        cout << "Parent 2" << endl;
    }
};

class Child1 : public Parent1
{
public:
    Child1()
    {
        cout << "Child 1" << endl;
    }
};

class Child2 : public Parent2
{
public:
    Child2()
    {
        cout << "Child 2" << endl;
    }
};

class GrandChild : public Child1, public Child2
{
public:
    GrandChild()
    {
        cout << "Grand Child" << endl;
    }
};

int main()
{
    GrandChild gc;
    return 0;
}