#include <iostream>

using namespace std;

class Fruits
{
    string name;
    string color;
};

class Student
{
public:
    string name;
    int rollNumber;
};

int main()
{
    Fruits apple;

    Student *nur = new Student();
    nur->name = "Nur";
    nur->rollNumber = 101;
    cout << "Name: " << nur->name << endl
         << "Roll: " << nur->rollNumber << endl;

    return 0;
}