#include<bits/stdc++.h>
using namespace std;

int main()
{
    //stack is a container adapter that gives the programmer the functionality of a stack - specifically, a LIFO (last-in, first-out) data structure.
    //The standard container classes deque, list, and vector can be used to implement the stack data structure.
    stack < int > st;
    st.push ( 1 );
    st.push ( 2 );
    st.push ( 3 );
    st.push ( 4 );

    cout<< st.top() << endl;
    //output: 4

    //to remove the top element : 4
    st.pop();

    cout<< st.top() << endl;
    //outptut: 3
     
    //st = 3 2 1
    //to print serially
    while( !st.empty() )
    {
        cout<< st.top() << " ";
        st.pop();
    }
    //output: 3 2 1 
    //stack time complexity : O(1) for push, pop, top, empty, size
    
    //stak size
    stack < int > stack;
    stack.push( 5 );
    stack.push( 6 );
    stack.push( 9 );
    stack.push( 5 );

    cout<< stack.size() << endl;
    //output: 4

    


    return 0;
}