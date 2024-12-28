#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Comparator function for sorting points
bool compare(pair<int, int>& a, pair<int, int>& b) {
    // (x1 > x2) or (x1 == x2 and y1 < y2)
    if (a.first != b.first) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }
        
        // Sort the points based on the comparator
        sort(points.begin(), points.end(), compare);
        
        // Output the sorted points
        for (const auto& point : points) {
            cout << point.first << " " << point.second << "\n";
        }
    }
    
    return 0;
}
