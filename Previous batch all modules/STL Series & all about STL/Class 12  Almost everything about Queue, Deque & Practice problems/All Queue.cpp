//     Queue called:  FIFO =  first in first out

/*
push(x) – Inserts an element x in the back.
pop() – Removes the front element.
front() – Returns the front element.
back() – Returns the last element.
empty() – Checks if the queue is empty.
size() – Returns the number of elements

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    //Declare a queue
    queue<int> q;

    //Insert elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    //Print the queue (FIFO order)
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";  
        q.pop();  
    }
    cout << endl;
    // Output: 1 2 3 4 5
  
    // Check size (Queue is empty after popping all elements)
    cout << "Size of the queue: " << q.size() << endl;

    // Output: 0


    // Create a new queue
    queue<int> q2;
    q2.push(2);
    q2.push(3);
    q2.push(4);
    q2.push(5);

    // Access front element
    cout << "Front element: " << q2.front() << endl;
    
    // Output: 2

    // Remove the front element (2)
    q2.pop();

    // New front element
    cout << "New front element: " << q2.front() << endl;

    // Output: 3


    // Access last element
    cout << "Last element: " << q2.back() << endl;
    // Output: 5


    return 0;
}
