// Q13. A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a solution to calculate the roots of a quadratic equation.

#include <iostream>
#include <cmath> // For using the sqrt() function

using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter coefficients a, b and c for the equation ax^2 + bx + c = 0  :: ";
    cout << "Enter a  ::  ";
    cin >> a;
    cout << "Enter b  ::  ";
    cin >> b;
    cout << "Enter c  ::  ";
    cin >> c;

    // when a = 0
    if (a == 0)
    {
        // Equation is Linear eq
        cout << "This is linear equation " << endl;
        if (b != 0)
        {
            float root = -c / b;
            cout << "The single root = " << root << endl;
        }
        else // a=0 and b=0
        {
            // Equation is c = 0
            if (c == 0)
            {
                cout << "Since a=0 b=0 and c=0 the equation is 0 = 0 which infinite solutions" << endl;
            }
            else
            {
                cout << "Since a=0 and b=0 but c is non-zero the equation is " << c << " = 0, which is a contradiction and has no solution" << endl;
            }
        }
    }
    else // quadratic equation
    {
        float d = b * b - 4 * a * c;

        if (d > 0)
        {
            cout << "roots are real and different" << endl;
            cout << "root 1 = " << (-b + sqrt(d)) / (2 * a) << endl;
            cout << "root 2 = " << (-b - sqrt(d)) / (2 * a) << endl;
        }
        else if (d == 0)
        {
            cout << "roots are real and same" << endl;
            cout << "root 1 = root 2 = " << -b / (2 * a) << endl;
        }
        else // discriminant negative
        {
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-d) / (2 * a);
            cout << "roots are complex and different" << endl;
            cout << "root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }

    return 0;
}