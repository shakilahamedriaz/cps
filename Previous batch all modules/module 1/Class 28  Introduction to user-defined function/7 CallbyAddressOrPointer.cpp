/// Pass by Address
//In pass by address, the function gets the addresses of the arguments, so changes made inside the function affect the original variables.


#include <iostream>
using namespace std;

void swapAddress(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swap (pass by address): " << a << " " << b << endl;
    swapAddress(&a, &b);
    cout << "After swap (pass by address): " << a << " " << b << endl;
    return 0;
}
