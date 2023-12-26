#include <iostream>

using namespace std;

class Sum // Function overloading
{
public:
    void add(int a, int b)
    {
        cout << "Sum = " << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "Sum = " << a + b + c << endl;
    }
    void add(int a, float b)
    {
        cout << "Sum = " << a + b << endl;
    }
};

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

class Complex // Operator overloading
{
public:
    int real, img;
    Complex(int a, int b)
    {
        real = a;
        img = b;
    }

    Complex operator+(Complex &c)
    {
        Complex ans(0, 0);
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main()
{

    // Sum n;
    // n.add(2, 3);
    // n.add(4, 3, 2);
    // n.add(float(4.3), 4);
    // n.add(3, float(4.3));
    Concat a;
    cout << a.add(4, 5) << endl
         << a.add("Md.", "Nur") << endl;
    // Complex c1(3, 4);
    // Complex c2(3, 4);
    // Complex c3 = c1 + c2;
    // cout << c1.real << endl
    //      << c2.img << endl
    //      << c3.real << " " << c3.img << endl;
    return 0;
}