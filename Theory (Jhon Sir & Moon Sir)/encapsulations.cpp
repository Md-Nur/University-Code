#include <iostream>

using namespace std;

class ABC
{
    int l;

public:
    void setL(int a)
    {
        l = a;
    }
    int getL()
    {
        return l;
    }
};

int main()
{
    ABC general;
    int l;
    cin >> l;
    general.setL(l);
    cout << general.getL() << endl;
}