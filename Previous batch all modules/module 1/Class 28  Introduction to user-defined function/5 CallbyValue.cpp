
////  Pass by Value
//   In pass by value, the function gets a copy of the arguments, 
//   so changes made inside the function do not affect the original variables.
#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int a = 10, b = 20;

    cout << "Before swap (pass by value): " << a << " " << b << endl;
    swapValue(a, b);
    cout << "After swap (pass by value): " << a << " " << b << endl;

    return 0;
}


