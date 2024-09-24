#include<bits/stdc++.h>
using namespace std;


// pass by address

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main(){

    int a = 10, b = 20;
    cout<< "Before swap: " << a << " " << b << endl;
    swap(a,b);
    cout<< "After swap: " << a << " " << b << endl;

    return 0;
}

