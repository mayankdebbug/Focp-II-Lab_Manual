// Q29. A weather monitoring app records 30-day temperature logs. Implement a solution to store daily temperatures in an array and display the minimum temperature for the month

#include <iostream>
using namespace std;

int main()
{

    int templog[30];
    int min = 0;
    for (int i = 0; i < 30; i++)
    {
        cout << "Enter the temprature for day " << i << " :: ";
        cin >> templog[i];
        if (templog[i] < min)
        {
            min = templog[i];
        }
    }
    cout << "The minimum temprature for 30 days is " << min;

    return 0;
}