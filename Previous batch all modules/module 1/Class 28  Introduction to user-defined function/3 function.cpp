#include<iostream>
using namespace std;

int mx(int a, int b){
    
    if(a > b)  return a;
    return b;

}

void swap(int a, int b){

    int temp = a;
    a = b;
    b = temp;

   cout<< a << " " << b << endl;
    return;
}

int main(){

    int a = 10, b = 20;
    cout<< "Max of a and b is: ";
    cout<<mx(a,b) << endl;

    swap(a,b);
    cout<< a << " " << b << endl;


    return 0;
}