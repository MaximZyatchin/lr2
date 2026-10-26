#include <iostream> 
using namespace std;

int main()
{
    long long number;
    cout << "Enter number:";
    cin >> number;

    int digit_count = 0;
    int digit_sum = 0;

    if (number == 0) {
        digit_count = 1;
        digit_sum = 0;
    } else {
        if (number < 0) {
            number = -number;
        }
        while (number > 0) {
            int last_digit = number % 10;
            digit_sum += last_digit;
            digit_count++;
            number /= 10;
        }
     }

     cout << "Digit count:" << digit_count << "\n";
     cout << "Digit sum:" << digit_sum << "\n";

     return 0;
    }
    


