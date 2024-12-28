#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to check and remove "pie" or "map"
int makeBeautiful(string &s) {
    int n = s.length();
    int deletions = 0;
    for (int i = 0; i < n - 2; i++) {
        // Check if substring "pie" or "map" exists
        if ((s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e') || 
            (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p')) {
            deletions += 3; // Remove all 3 characters
            i += 2; // Skip to the next window
        }
    }
    return deletions;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        string s;
        cin >> n >> s; // Input length and string
        int result = makeBeautiful(s);
        cout << result << endl; // Output result for the test case
    }
    return 0;
}
