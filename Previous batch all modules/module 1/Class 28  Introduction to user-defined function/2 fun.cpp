#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;

    cout<< "This will not execute";
}

int main(){
    int a = 10, b = 20;
    cout<<add(a,b);
    return 0;
}