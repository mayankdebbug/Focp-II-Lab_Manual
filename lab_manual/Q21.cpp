// Q21. A CAD tool generates rectangular hollow frames. Implement a solution to display:
// ********
// *      *
// *      *
// *      *
// *      *
// *      *
// *      *
// ********

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 8; i++)
    {
        cout << '*';
    }
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << '*';
        for (int j = 0; j < 6; j++)
        {
            cout << ' ';
        }
        cout << '*' << endl;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << '*';
    }
    return 0;
}