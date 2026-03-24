// Q3 A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
// convert Fahrenheit temperature into Centigrade or vice versa.

#include <iostream>

using namespace std;

int main()
{
    int choice;
    cout << "Enter what you want to do in the app \n1. Convert Fahrenheit to Celsius \n2. Convert Celsius to Fahrenheit \n";
    cin >> choice;
    if (choice == 1)
    {
        int f, c;
        cout << "enter the temperature in Fahrenheit: ";
        cin >> f;
        c = (f - 32) * 5.0 / 9.0;
        cout << "temperature in celsius is " << c << "°C" << endl;
    }
    else if (choice == 2)
    {
        int c, f;
        cout << "enter temperature in celsius: ";
        cin >> c;
        f = (c * 9.0 / 5.0) + 32;
        cout << "temperature in fahrenheit is " << f << "°F" << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}