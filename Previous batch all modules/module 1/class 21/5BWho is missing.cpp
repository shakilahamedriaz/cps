#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> freq(N + 1, 0);  
    
    for (int i = 0; i < 4 * N - 1; i++) {
        int A;
        cin >> A;
        freq[A]++;
    }
    
    // Find the missing number
    for (int i = 1; i <= N; i++) {
        if (freq[i] < 4) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
