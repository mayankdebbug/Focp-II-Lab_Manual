#include <iostream>
using namespace std;
class Shape
{
public:
    Shape() { cout << "\n shape default const called"; }
    virtual void area()
    {
        cout << "\n no dim no area";
    }
    void display() { cout << "\n we are 2d shapes"; }
};
class Rectangle : public Shape
{
public:
    int length, width;
    Rectangle(int l = 5, int w = 10) : length(l), width(w)
    {
        cout << "\n Rectangle object created";
    }
    void area() { cout << "\n area = " << length * width; } // overriding
};
int main()
{
    Shape *s1, s2;
    Rectangle r2(50, 45);
    s1 = &s2;
    s1->area();
    s1 = &r2;
    s2 = r2;
    r2.area();
    s1->area();
    s2.area();
    return 0;
}
