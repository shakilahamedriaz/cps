#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int R1, R2;
    cin >> R1 >> R2;

    int D1, D2;
    cin >> D1 >> D2;

    int finalR1 = R1 + D1;
    int finalR2 = R2 + D2;

    if (finalR1 > finalR2) {
        cout << "Dominater" << "\n";
    } else {
        cout << "Everule" << "\n";
    }

    return 0;
}