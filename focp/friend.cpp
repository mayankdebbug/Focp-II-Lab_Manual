#include <iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int width;
    static int count;


    Rectangle()
    {
        length = 0;
        width = 0;
        count++;
    }
    Rectangle(int l, int w)
    {
        length = 1;
        width = w;
        count++;
    }
    void display()
    {
        cout << "\n length=" << length;
        cout << "\n width=" << width;
        cout<<"\n nmber of objects created: "<<count;
    }
};
int Rectangle::
void area(Rectangle obj)
{
    cout << "\n area=" << obj.length * obj.width;
}
int main()
{
    Rectangle r1, r2(23, 45);
    cout << r1.length;
    r1.display();
    area(r1);
    r2.display();
    area(r2);
    return 0;
}