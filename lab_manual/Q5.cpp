// A student wants to swap the values of two variables for practising coding basics.
// Implement a solution to swap two numbers using different techniques

#include <iostream>
using namespace std;

int main()
{
    // Without using temp variable
    int var1, var2;
    cout << "Without using temp variable" << endl;
    cout << "Please enter two numbers :: ";
    cin >> var1 >> var2;
    cout << "var 1 is " << var1 << endl;
    cout << "var 2 is " << var2 << endl;
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;
    cout << "var 1 is " << var1 << endl;
    cout << "var 2 is " << var2 << endl;

    cout << endl;

    // Using temp var
    int int1, int2, temp;
    cout << "Using temp variable" << endl;
    cout << "Please enter two numbers :: ";
    cin >> var1 >> var2;
    cout << "var 1 is " << var1 << endl;
    cout << "var 2 is " << var2 << endl;
    temp = int1;
    int1 = int2;
    int2 = temp;
    cout << "var 1 is " << int1 << endl;
    cout << "var 2 is " << int2 << endl;

    return 0;
}