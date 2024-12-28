#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> houses(n);
    for (int i = 0; i < n; i++) {
        cin >> houses[i];
    }
    
    int maxLength = 1; // At least one house can be considered.
    int left = 0;
    
    for (int right = 1; right < n; right++) {
        if (houses[right] == houses[right - 1]) {
            maxLength = max(maxLength, right - left);
            left = right;
        }
    }
    
    maxLength = max(maxLength, n - left); // For the case when the longest segment is at the end.
    
    cout << maxLength << endl;
    
    return 0;
}
