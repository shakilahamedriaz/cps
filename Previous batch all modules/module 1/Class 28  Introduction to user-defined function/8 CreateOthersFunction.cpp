#include <iostream>
#include <cmath> // For pow function
using namespace std;

// Function for addition
int add(int a, int b) {
    return a + b;
}

// Function for subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function for power calculation
int power(int base, int exponent) {
    return pow(base, exponent);
}

// Function to reverse an integer
int reverse(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int a = 10, b = 5;
    int num = 1234;

    // Demonstrate addition
    cout << "Addition of " << a << " and " << b << " is: " << add(a, b) << endl;

    // Demonstrate subtraction
    cout << "Subtraction of " << a << " and " << b << " is: " << subtract(a, b) << endl;

    // Demonstrate power calculation
    cout << a << " raised to the power of " << b << " is: " << power(a, b) << endl;

    // Demonstrate reverse of an integer
    cout << "Reverse of " << num << " is: " << reverse(num) << endl;

    return 0;
}