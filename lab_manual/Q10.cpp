// Q10. A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a leap year or not.

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "enter a year :: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "it is a leap year";
            }
            else
            {
                cout << "it is not a leap year";
            }
        }
        else
        {
            cout << "it is a leap year";
        }
    }
    else
    {
        cout << "it is not a leap year";
    }

    return 0;
}
