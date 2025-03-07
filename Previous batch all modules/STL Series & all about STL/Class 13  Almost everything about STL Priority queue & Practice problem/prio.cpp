//zodi prothom value ta boro theke choto and second value ta choto theke boro

#include <bits/stdc++.h>
using namespace std;

int main()
{


    priority_queue < pair<int, int> > q;
    q.push({1, 2});
    q.push({3, 4});
    q.push({5, 6});
    q.push({7, 8});
    q.push({9, 10});

    while(!q.empty())
    {
        cout << q.top().first << " " << q.top().second << endl;;
        q.pop();
    }
    cout<< endl;

    
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


    return 0;
}