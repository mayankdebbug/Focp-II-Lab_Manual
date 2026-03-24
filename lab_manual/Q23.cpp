// Q23. A fireworks display system arranges sparks in butterfly style. Implement a solution to display a butterfly star pattern.

#include <iostream>
using namespace std;

int main()
{
    for (int j = 1; j < 6; j++)
    {
        for (int z = 0; z < j; z++)
        {
            cout << '*';
        }
        for (int z = j; z < 10 - j; z++)
        {
            cout << ' ';
        }
        for (int z = 10 - j; z < 10; z++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int j = 4; j > 0; j--)
    {
        for (int z = 0; z < j; z++)
        {
            cout << '*';
        }
        for (int z = j; z < 10 - j; z++)
        {
            cout << ' ';
        }
        for (int z = 10 - j; z < 10; z++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}