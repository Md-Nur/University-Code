#include <iostream>

using namespace std;

class Rectangle
{
public:
    int length, width;

    Rectangle() // default constructor - no arg passed
    {
        length = 0;
        width = 0;
    }
    Rectangle(int l, int w) // parameterized constructor
    {
        length = l;
        width = w;
    }

    Rectangle(Rectangle &r) // copied constructor
    {
        length = r.length;
        width = r.width;
    }

    ~Rectangle()
    {
        cout << "Rectangle is finished by destructor" << endl;
    }
};

int main()
{
    Rectangle r1;
    cout << "This is r1's length: " << r1.length << endl;

    Rectangle *r11 = new Rectangle();
    cout << "This is r11's width: " << r11->width << endl;
    delete r11;

    Rectangle r2(3, 4);
    cout << "Area: " << r2.length * r2.width << endl;

    Rectangle r3 = r2;
    cout << "Length of R3 = " << r3.length << endl
         << "Width of R3 = " << r3.width << endl;
    return 0;
}