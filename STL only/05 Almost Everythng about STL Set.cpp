#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // Set: stores unique & sorted elements
    set<int> st = {1, 2, 3, 3, 2, 2, 0, 0, 0, 77, 9};
    
    // Printing set using for-each loop
    cout << "Print set by for-each loop: " << endl;
    for(auto u : st) cout << u << " ";
    cout << endl;
    // output: 0 1 2 3 9 77

    // Printing set using iterator
    cout << "Print set by iterator: " << endl;
    set<int>::iterator it;
    for(it = st.begin(); it != st.end(); it++) cout << *it << " ";
    cout << endl;
    // output: 0 1 2 3 9 77

    // Size of set
    cout << "Size of the set is: " << st.size() << endl;
    // output: 6

    // Checking if set is empty
    cout << "Set has elements or not: " << st.empty() << endl;
    // output: 0 (means not empty)

    // Clear the set
    st.clear();
    cout << "Set has elements or not after clear: " << st.empty() << endl;
    // output: 1 (means empty)

    // Inserting elements into an empty set
    st.insert(2);
    st.insert(3);
    st.insert(3);
    st.insert(1);
    st.insert(0);
    st.insert(0);  // Each insert: O(log n)

    cout << "After inserting elements again: " << endl;
    for(auto u : st) cout << u << " ";
    cout << endl;
    // output: 0 1 2 3

    cout << "Check the size of the Set again: " << st.size() << endl;
    // output: 4

    // Checking if a specific element is available in the set
    cout << "Check if 4 is available in the set: " << st.count(4) << endl;
    // output: 0 (4 is not available)

    // Accessing most front and back elements of the set
    cout << "Most front element of the set: " << *st.begin() << endl;
    cout << "Most back element of the set: " << *st.rbegin() << endl;
    cout << "Most back element using --end: " << *(--st.end()) << endl;
    // output: front - 0, back - 3

    // Erase a specific element from the set
    st.erase(2);
    cout << "After erasing 2, elements are: ";
    for(auto u : st) cout << u << " ";
    cout << endl;
    // output: 0 1 3

    // Erase the first element of the set
    st.erase(st.begin());
    cout << "After erasing the first element: ";
    for(auto u : st) cout << u << " ";
    cout << endl;
    // output: 1 3

    // Erase the last element of the set
    st.erase(--st.end());
    cout << "After erasing the last element: ";
    for(auto u : st) cout << u << " ";
    cout << endl;
    // output: 1

    // Set with strings (unique & lexicographically sorted)
    set<string> s;
    s.insert("shakil");
    s.insert("shakil");
    s.insert("israt");
    s.insert("israt");
    s.insert("nobel");
    s.insert("apple");
    s.insert("apple");
    s.insert("shanto");

    cout << "Size of the string set: " << s.size() << endl;
    for(auto u : s) cout << u << " ";
    cout << endl;
    // output: apple israt nobel shakil shanto

    // Set with pairs (unique pairs, sorted by first then second element)
    set<pair<int, int>> sp;
    sp.insert({1, 2});
    sp.insert({1, 2});
    sp.insert({9, 3});
    sp.insert({2, 3});
    sp.insert({4, 4});
    sp.insert({3, 4});
    sp.insert({3, 4});

    cout << "Size of the pair set: " << sp.size() << endl;
    for(auto u : sp) cout << u.first << " " << u.second << endl;
    // output:
    // 1 2
    // 2 3
    // 3 4
    // 4 4
    // 9 3

    // Set with decreasing order
    set<int, greater<int>> st1 = {1, 2, 3, 3, 2, 2, 0, 0, 0, 77, 9};
    cout << "Set in decreasing order: ";
    for(auto u : st1) cout << u << " ";
    cout << endl;
    // output: 77 9 3 2 1 0

    // Set with strings in decreasing lexicographical order
    set<string, greater<string>> str = {"shakil", "israt", "nobel", "apple", "apple", "shanto"};
    cout << "String set in decreasing order: ";
    for(auto u : str) cout << u << " ";
    cout << endl;
    // output: shanto shakil nobel israt apple

    // Set of pairs in decreasing order
    set<pair<int, int>, greater<pair<int, int>>> sp1;
    sp1.insert({1, 2});
    sp1.insert({1, 2});
    sp1.insert({9, 3});
    sp1.insert({2, 3});
    sp1.insert({4, 4});

    cout << "Size of the pair set in decreasing order: " << sp1.size() << endl;
    for(auto u : sp1) cout << u.first << " " << u.second << endl;
    // output:
    // 9 3
    // 4 4
    // 2 3
    // 1 2

    // Unordered set: stores data uniquely but unordered
    unordered_set<int> ust = {1, 2, 3, 3, 2, 2, 0, 0, 0, 77, 9};  // Average O(1) operations
    cout << "Unordered set: ";
    for(auto u : ust) cout << u << " ";
    cout << endl;
    /*
    output may vary as unordered_set does not maintain order:
    Possible outputs:
    0 1 2 3 9 77
    or 1 2 3 0 9 77
    */
    
    // Find an element in the set
    set<int> s = {1, 2, 3};
    auto it = s.find(2);
    if (it != s.end()) cout << "Found: " << *it << endl;  // output: Found: 2
    else cout << "Not found" << endl;


    //Erase elements within a specific range in the set
    // Erase elements less than 4
    set<int> s = {1, 2, 3, 4, 5};
    s.erase(s.begin(), s.find(4));  // Removes elements less than 4
    for (auto u : s) cout << u << " ";  // output: 4 5


    return 0;
}
