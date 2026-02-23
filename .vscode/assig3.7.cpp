#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, i = 0, digit;

    cout << "Enter a binary number: ";
    cin >> binary;

    while(binary != 0) {
        digit = binary % 10;          // get last digit
        decimal += digit * pow(2, i); // 2^i
        binary /= 10;
        i++;
    }

    cout << "Decimal value: " << decimal;

    return 0;
}