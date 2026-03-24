// A game compares three players' scores to find who is ahead. Implement a solution to accept three scores and identify the winner

#include <iostream>
using namespace std;

int main()
{

    int players[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the score of player" << i + 1;
        cin >> players[i];
    }

    if (players[1] > players[2])
    {
        if (players[1] > players[3])
        {
            cout << "The winner is 1";
        }
        else if (players[1] = players[3])
        {
            cout << "Winners are players 1 and 3";
        }
        else
        {
            cout << "The winner is 3";
        }
    }
    else if (players[1] < players[3])
    {
        if (players[2] > players[3])
        {
            cout << "The winner is 2";
        }
        else if (players[2] = players[3])
        {
            cout << "Winners are players 2 and 3";
        }
        else
        {
            cout << "The winner is 3";
        }
    }
    else if ((players[1] = players[2]) && (players[1] > players[2]))
    {
        cout << "Winners are players 1 and 2";
    }
    else
    {
        cout << "All three players have equal scores";
    }

    return 0;
}