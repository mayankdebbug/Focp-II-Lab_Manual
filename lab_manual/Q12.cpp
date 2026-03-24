// Q12. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to
// check the triangle type based on its sides.

#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3;
    cout << "enter the 3 sides of triangle :: ";
    cin >> s1 >> s2 >> s3;

    if (s1 == s2 && s2 == s3)
    {
        cout << "tt is Equilateral Triangle";
    }
    else if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        cout << "tt is Isosceles Triangle";
    }
    else
    {
        cout << "tt is Scalene Triangle";
    }

    return 0;
}