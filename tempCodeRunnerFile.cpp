#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, first, last, digits = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    last = temp % 10;

    // Count digits and extract first digit
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    // If number has only one digit
    if (digits == 0) {
        cout << "Swapped number: " << num << endl;
        return 0;
    }

    // Remove first and last digit from original number
    int middle = num % static_cast<int>(pow(10, digits));
    middle /= 10;

    // Construct new number
    int swapped = last * static_cast<int>(pow(10, digits)) + middle * 10 + first;

    cout << "Swapped number: " << swapped << endl;
    return 0;
}
