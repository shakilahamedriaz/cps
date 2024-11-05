#include<bits/stdc++.h>
using namespace std;

// Custom Comparator for Sorting Pairs
bool cmp(const pair<int,int>& p1, const pair<int,int>& p2) {
    if (p1.first > p2.first) return true;  // Sort by first element in descending order
    if (p1.first == p2.first) return (p1.second < p2.second);  // If first elements are equal, sort by second in ascending order
    return false;
}

int main()
{
    // Pair with string and vector<int>
    pair<string, vector<int>> p;
    p.first = "abc";  // First element is a string
    p.second = {1, 2, 3, 4};  // Second element is a vector of integers

    // Output the elements of the pair
    cout << "First element of the pair: " << p.first << endl;  
    // output: abc
    cout << "Second element of the pair: ";
    for(auto u : p.second) cout << u << " ";  // Printing the vector elements
    // output: 1 2 3 4
    cout << endl << endl;

    // Pair of integers and operations
    pair<int, int> q;
    q = make_pair(2, 3);  // Create pair using make_pair
    cout << q.first << " " << q.second << endl;  
    // output: 2 3

    q.first++;  // Increment the first element
    cout << q.first << endl;  // Output the updated first element
    // output: 3

    // Another pair example
    pair<int, int> d = {44, 46};  // Initialize directly
    cout << d.first << " " << d.second << endl;
    // output: 44 46

    // Pair with string and integer
    pair<string, int> m = {"shakil", 995};  // String-int pair
    cout << m.first << " " << m.second << endl;
    // output: shakil 995
    cout << endl;

    // Pair with vector<int>
    pair<string, vector<int>> p1 = {"Allah_Hu_Akbar", {1,2,3,4,5,6,7,8,9,10}};
    cout << "First element of the pair: " << p1.first << endl;  
    // output: Allah_Hu_Akbar
    cout << "Size of the second element (vector): " << p1.second.size() << endl;
    // output: 10

    // Output the vector
    for(auto it : p1.second) cout << it << " ";  
    // output: 1 2 3 4 5 6 7 8 9 10
    cout << endl;

    // Pair comparison
    pair<int, int> o = {2, 3}, k = {4, 5};
    
    // Comparison of pairs based on first, then second elements
    if(o < k) cout << "o is less than k" << endl;
    // output: o is less than k
    else cout << "o is not less than k" << endl;

    pair<int, int> a1 = {2, 8}, a2 = {2, 5};
    if(a1 == a2) cout << "a1 is equal to a2" << endl;
    else if(a1 < a2) cout << "a1 is less than a2" << endl;
    // output: a1 is greater than a2
    else cout << "a1 is greater than a2" << endl;

    // Finding minimum of two pairs
    pair<int, int> b1 = {2, 3}, b2 = {1, 6};
    pair<int, int> mn = min(b1, b2);  // Min function for pairs
    cout << "Minimum pair: " << mn.first << " " << mn.second << endl;
    // output: 1 6
    cout << endl;

    // Vector of pairs and sorting
    vector<pair<int, int>> vr;
    
    // Adding pairs to the vector
    vr.push_back({2, 3});
    vr.push_back({4, 5});
    vr.push_back({6, 7});
    vr.push_back({6, 2});
    vr.push_back({4, 1});
    vr.push_back({1, 9});
    vr.push_back({4, 6});

    // Sorting pairs in increasing order
    sort(vr.begin(), vr.end());
    cout << "Increasing order of the pairs: " << endl;
    for(auto u : vr) cout << u.first << " " << u.second << endl;
    // output: 
    // 1 9
    // 2 3
    // 4 1
    // 4 5
    // 4 6
    // 6 2
    // 6 7

    // Sorting in decreasing order
    cout << "Decreasing order of the pairs: " << endl;
    sort(vr.rbegin(), vr.rend());
    for(auto u : vr) cout << u.first << " " << u.second << endl;
    // output:
    // 6 7
    // 6 2
    // 4 6
    // 4 5
    // 4 1
    // 2 3
    // 1 9
    cout << endl;

    // Sorting array of pairs
    pair<int, int> arr[] = { {2, 3}, {4, 5}, {6, 7}, {6, 2}, {4, 1} };
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of array
    sort(arr, arr + n);  // Sorting array of pairs
    for(int i = 0; i < n; i++) cout << arr[i].first << " " << arr[i].second << endl;
    // output:
    // 2 3
    // 4 1
    // 4 5
    // 6 2
    // 6 7
    cout << endl;

    // Vector of string-int pairs
    vector<pair<string, int>> vt;
    
    // Adding string-int pairs to the vector
    vt.push_back({"shakil", 66});
    vt.push_back({"Asif", 77});
    vt.push_back({"Ahmed", 88});
    vt.push_back({"Ali", 99});
    vt.push_back({"Ahmed", 100});
    vt.push_back({"Ahmed", 100});

    // Sorting vector of pairs
    sort(vt.begin(), vt.end());
    for(auto it : vt) cout << it.first << " " << it.second << endl;
    // output:
    // Ahmed 88
    // Ahmed 100
    // Ahmed 100
    // Ali 99
    // Asif 77
    // shakil 66

    // Making unique pair of integers
    int sz = unique(vt.begin(), vt.end()) - vt.begin();  // Unique elements
    for(int i = 0; i < sz; i++) {
        cout << vt[i].first << " " << vt[i].second << " ";
    }
    // output:
    // Ahmed 88
    // Ahmed 100
    // Ali 99
    // Asif 77
    // shakil 66
    cout << endl;


    //User input for pair
    pair<int, int> p2;
    cout << "Enter two integers: ";
    cin >> p2.first >> p2.second;
    cout << "First element: " << p2.first << endl;
    cout << "Second element: " << p2.second << endl;
    cout << endl;
    //output: 
    //Enter two integers: 5 6
    //First element: 5
    //Second element: 6

    // Sorting using comparator
    vector<pair<int,int >>v = {{2, 3}, {4, 5}, {1, 5}, {1, 6}, {6, 7}, {6, 8}};
    sort(v.begin(), v.end(), cmp);  // Sort using custom comparator
    for(auto u : v) cout << u.first << " " << u.second << endl;
    // Output:
    // 6 7
    // 6 8
    // 4 5
    // 2 3
    // 1 5
    // 1 6
    cout << endl;


    // Multiplying pair elements and sorting in reverse order
/*
    vector<pair<int,int >>v = {{2, 3}, {4, 5}, {1, 5}, {1, 6}, {6, 7}, {6, 8}};
    for(int i = 0; i < v.size(); i++) v[i].first *= -1;  // Multiply first element of each pair by -1
    sort(v.begin(), v.end());  // Sort in ascending order (which reverses the original order)
    for(auto u : v) cout << (u.first * -1) << " " << u.second << endl;  // Multiply first element by -1 again to restore original values // Multiply first element by -1 again to restore original values
    // Output:
    // 6 7
    // 6 8
    // 4 5
    // 2 3
    // 1 5
    // 1 6
    cout << endl;

*/



    return 0;
}
