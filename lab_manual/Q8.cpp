// A monitoring system generates a sequence of numeric event IDs from 1 to N.
// To make logs easier to analyse, the system applies tags to certain events based on predefined rules:
// • Events whose ID is divisible by 3 are tagged as “Buzz”
// • Events whose ID is divisible by 5 are tagged as “Fuzz”
// • Events divisible by both 3 and 5 receive both tags

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Enter the no of numeric event IDs you want to create :: ";
    cin >> n;

    int eventids[n];
    int tags[n];

    for (int i = 0; i < n; i++)
    {
        // i am giving 2 for BuzzFuzz and 1 for Buzz and 2 for Fuzz and -1 for nothing
        cout << "Enter the event id for " << i + 1 << " :: ";
        cin >> eventids[i];
        if ((eventids[i] % 3 == 0) && (eventids[i] % 5 == 0))
        {
            tags[i] = 2;
        }
        else if (eventids[i] % 3 == 0)
        {
            tags[i] = 1;
        }
        else if (eventids[i] % 5 == 0)
        {
            tags[i] = 0;
        }
        else
        {
            tags[i] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        string tag;
        if (tags[i] == 2)
        {
            tag = "BuzzFuzz";
        }
        else if (tags[i] == 1)
        {
            tag = "Buzz";
        }
        else if (tags[i] == 0)
        {
            tag = "Fuzz";
        }
        else
        {
            tag = "";
        }

        cout << i + 1 << " :: " << eventids[i] << " :: " << tag << endl;
    }

    return 0;
}