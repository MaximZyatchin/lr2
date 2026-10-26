#include <iostream>
using namespace std;

bool isPositive(int number) {
    return number > 0;
}

bool isThreeDigit(int number) {
    if (number < 0) number = -number;
    return number >= 100 && number <= 999;
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "Positive: ";
    if (isPositive(number)) cout << "yes\n";
    else cout << "no\n";

    cout << "Three-digit: ";
    if (isThreeDigit(number)) cout << "yes\n";
    else cout << "no\n";

    return 0;
}