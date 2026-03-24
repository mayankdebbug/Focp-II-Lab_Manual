// Q27. A supermarket software maintains item price lists. Implement a solution to store the prices of 10 items in an array and display the maximum price.

#include <iostream>
using namespace std;

int main()
{
    int price[10];
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the price of item " << i + 1 << " :: ";
        cin >> price[i];
        if (price[i] > max)
        {
            max = price[i];
        }
    }
    cout << "Maximum price is " << max << endl;

    return 0;
}