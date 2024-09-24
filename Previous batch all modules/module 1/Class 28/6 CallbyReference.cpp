
//// Pass by Reference
// In pass by reference, the function gets references to the arguments, 
// so changes made inside the function affect the original variables.

// this impacts the original variables, so the changes made inside the function are reflected in the original variables.


#include <iostream>
using namespace std;

void swapReference(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Before swap (pass by reference): " << a << " " << b << endl;
    swapReference(a, b);
    cout << "After swap (pass by reference): " << a << " " << b << endl;

    return 0;
}


//Each of these examples demonstrates a different method of passing arguments to a function in C++.