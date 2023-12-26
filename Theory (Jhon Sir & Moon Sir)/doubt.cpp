#include <iostream>

using namespace std;

class Concat
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    string add(string a, string b)
    {
        return a + b;
    }
};

int main()
{

    Concat a;
    cout << a.add(4, 5) << endl
         << a.add("Md.", "Nur") << endl;
    return 0;
}