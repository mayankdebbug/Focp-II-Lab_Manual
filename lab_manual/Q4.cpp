// Q4 A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
// Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float final_total, discount;
    int total_no_items;

    int item_arr[50][4];

    int i = 0;

    while (1)
    {

        int item_no;
        float total, unit_price, quantity;

        cout << "Please enter the item no :: ";
        cin >> item_no;

        cout << "Please enter the quanity :: ";
        cin >> quantity;

        cout << "Please enter the unit price :: ";
        cin >> unit_price;

        if ((item_no == 0) && (quantity == 0) && (unit_price == 0))
        {
            cout << "\nGenerating Final Bill \n";
            break;
        }

        item_arr[i][0] = item_no;
        item_arr[i][1] = quantity;
        item_arr[i][2] = unit_price;

        total = quantity * unit_price;
        final_total += total;
        cout << "Total is " << total << endl;
        item_arr[i][3] = total;

        i++;
    }

    cout << "Enter the discount percentage  ::  ";
    cin >> discount;

    total_no_items = i;

    cout << "Item NO" << setw(10) << "Quanity" << setw(10) << "Price" << setw(10) << "total\n"; // use of setw for formatting output from the iomanip library
    int j = 0;
    while (i > 0)
    {
        cout << item_arr[j][0] << setw(10) << item_arr[j][1] << setw(10) << item_arr[j][2] << setw(10) << item_arr[j][3] << endl;
        j++;
        i--;
    }
    cout << "You have got " << discount << " percent of discount\n";
    cout << "Total no of items are  ::  " << total_no_items << endl;
    cout << "Total bill without discount  ::  " << final_total << endl;
    cout << "Final Bill after discount  ::  " << final_total * discount / 100 << endl;
}
