#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int r1, r2, B;
        cin >> r1 >> r2 >> B;

        double oversBowled = (300 - B) / 6.0;
        double currentRunrate = r2 / oversBowled;

        double needRun = r1 - r2 + 1;
        double oversLeft = B / 6.0;
        double requiredRunrate = needRun / oversLeft;

        cout << fixed << setprecision(2) << currentRunrate << " " << fixed << setprecision(2) << requiredRunrate << "\n";
    }
    return 0;
}
