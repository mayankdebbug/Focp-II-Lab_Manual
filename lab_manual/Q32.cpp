// Q32. A stock market app tracks first and second highest stock values. Implement a solution to find the largest and second largest number in an array of size 5.

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int first = 0, second = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the stock value for " << i + 1 << " index  ::  ";
        cin >> arr[i];
        if (arr[i] >= first)
        {
            second = first;
            first = arr[i];
                }
        else if (arr[i] >= second)
        {
            second = arr[i];
        }
    }
    cout << "The first height stock value is " << first << endl
         << "The second heighest stock value is " << second;

    return 0;
}