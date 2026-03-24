// Q28. A data processing system classifies even and odd inputs separately. Implement a solution to store 5 elements in an array, compute sum of all even and sum of all odd numbers
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sumeven = 0;
    int sumodd = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value of element " << i + 1 << " :: ";
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            sumeven += arr[i];
        }
        else
        {
            sumodd += arr[i];
        }
    }
    cout << "Sum of even numbers is " << sumeven << endl;
    cout << "Sum of odd numbers is " << sumodd << endl;
    return 0;
}
