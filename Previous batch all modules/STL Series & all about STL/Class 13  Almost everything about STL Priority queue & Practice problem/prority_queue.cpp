#include <bits/stdc++.h>
using namespace std;

/**
 # Priority Queue in C++ (Binary Heap - Default: Max-Heap)
 - Top element has the highest priority.
 - Efficient insertion & deletion (logN time complexity).

 # Types:
 - Max-Heap (default): Largest element at the top.
 - Min-Heap: Smallest element at the top (`greater<>` comparator).
*/


int main()
{
    priority_queue< int > q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // Size of priority queue
    cout<< q.size() << endl; 
    // Output: 5
 
    // Top element
    cout<<q.top()<< endl; 
    // Output: 5
    
    // Remove top element
    q.pop(); 

    cout<<q.top()<< endl; 
    // Output: 4

    // Another priority queue
    priority_queue< int > ok;
    ok.push(5);
    ok.push(4);
    ok.push(3);
    ok.push(2);
    ok.push(1);

    // Print all elements (descending order)
    while(!ok.empty())
    {
        cout<< ok.top() << " ";
        ok.pop();
    }
    cout<< endl; 
    // Output: 5 4 3 2 1

    // Min-Heap (smallest element at top)
    priority_queue <int, vector<int>, greater<int> > pq;
    pq.push(5);
    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq.push(1);
    
    cout<<pq.top()<< endl; 
    // Output: 1

    // Print all elements (ascending order)
    while(!pq.empty())
    {
        cout<< pq.top() << " ";
        pq.pop();
    }
    cout<< endl; 
    // Output: 1 2 3 4 5

    // Min-Heap with pairs (compares first element)
    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > ppq;
    ppq.push({5, 1});
    ppq.push({4, 2});
    ppq.push({3, 3});
    ppq.push({2, 4});
    ppq.push({1, 5});

    // Print elements
    while(!ppq.empty())
    {
        cout<< ppq.top().first << " " << ppq.top().second <<  "--";
        ppq.pop();
    }
    cout<< endl;
    // Output: 1 5--2 4--3 3--4 2--5 1--


    // Default priority queue with pairs (max-heap based on first element)
    priority_queue< pair<int, int> > pq1;
    pq1.push({5, 1});
    pq1.push({4, 2});
    pq1.push({3, 3});
    pq1.push({2, 4});
    pq1.push({1, 5});

    // Print elements
    while(!pq1.empty())
    {
        cout<< pq1.top().first << " " << pq1.top().second <<  ",";
        pq1.pop();
    }
    // Output: 5 1,4 2,3 3,2 4,1 5,

    //first value is the priority and second value is the value
    //here first value is normal and second value is negative so that it can be sorted in ascending order
    //if second value is positive then it will be sorted in descending order based on first value
    priority_queue < pair<int, int> > p;
    p.push({1, -2});
    p.push({3, -4});
    p.push({3, -6});
    p.push({3, -2});
    p.push({5, -6});
    p.push({7, -8});
    p.push({9, -10});

    while(!p.empty())
    {
        cout << p.top().first << " " << p.top().second << endl;;
        p.pop();
    }  
    //output:
     /*     7 -8
            7 -8
            5 -6
            3 -2
            3 -4
            3 -6
            1 -2
   */
        
    return 0;
}