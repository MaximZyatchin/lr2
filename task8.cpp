#include <iostream> 
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main()
{
int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum: " << sum(x, y) << '\n';
    cout << "Difference: " << difference(x, y) << '\n';
    cout << "Product: " << multiply(x, y) << '\n';

    return 0;
}