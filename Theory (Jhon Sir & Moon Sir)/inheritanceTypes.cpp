#include <iostream>

using namespace std;

class Parent
{
public:
    Parent();
};
Parent::Parent()
{
    cout << "This is in the parent class" << endl;
}

class Child : public Parent
{
public:
    Child();
};

Child::Child()
{
    cout << "This is under the child class" << endl;
}

class Child1
{
public:
    Child1()
    {
        cout << "This is Child 1" << endl;
    }
};

class Child2 : public Parent
{
public:
    Child2()
    {
        cout << "This is child 2";
    }
};

class GrandChild : public Child
{

public:
    GrandChild()
    {
        cout << "This is Grand child" << endl;
    }
};

class GrandChild1 : public Child, public Child1
{
public:
    GrandChild1()
    {
        cout << "This is grand child 1" << endl;
    }
};

int main()
{
    Child c;
    cout << endl;
    GrandChild gc;
    cout << endl;
    GrandChild1 gc1;
    cout << endl;
    Child2 c2;

    return 0;
}
