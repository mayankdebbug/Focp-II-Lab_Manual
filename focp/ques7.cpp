#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "A is winner";
    else if (b > a && b > c)
        cout << "B is winner";
    else if (c > a && c > b)
        cout << "C is winner";
    else
        cout << "No single winner (tie)";

    return 0;
}