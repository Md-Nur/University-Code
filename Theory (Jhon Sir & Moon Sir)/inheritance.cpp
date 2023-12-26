#include <iostream>

using namespace std;

class Parent
{
    int x;

public:
    int y;

protected:
    int z;
};

class Child1 : public Parent
{
    // x will not be accessible
    // y will be public
    // z will be protected
};

class Child2 : protected Parent
{
    // x will not be accessible
    // y will be protected
    // z will be protected
};

class Child3 : private Parent
{
    // x will not be accessbile
    // y will be private
    // z will be private
};

int main()
{
    Parent p;
    // cout << p.x << endl; // not accessible
    cout << p.y << endl;
    // cout << p.z << endl; // not accessible
}