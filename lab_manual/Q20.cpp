// Q20. A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display:
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
#include <iostream>
using namespace std;

int main()
{
    for (int j = 0; j < 3; j++)
    {
        for (int i = 1; i < 6; i++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
