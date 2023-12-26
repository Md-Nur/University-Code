#include <iostream>

using namespace std;

class A
{
    int x;

public:
    A(int a)
    {
        x = a;
    }
    friend void moynaFunc(A &a);
};

void moynaFunc(A &a)
{
    cout << "This is the private value of A class. " << a.x << endl;
}

int main()
{
    A p(5);
    moynaFunc(p);
}