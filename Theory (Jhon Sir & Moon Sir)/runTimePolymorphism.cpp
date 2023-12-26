#include <iostream>

using namespace std;

class Parent
{
public:
    virtual void output()
    {
        cout << "This is Parent's output function" << endl;
    }
    void show()
    {
        cout << "This is Parent's show function" << endl;
    }
};

class Child : public Parent
{
public:
    virtual void output()
    {
        cout << "This is Child's output function" << endl;
    }
    void show()
    {
        cout << "This is Child's show function" << endl;
    }
};
int main()
{
    Parent *p;
    Child c;
    p = &c;

    p->output();
    p->show();

    return 0;
}