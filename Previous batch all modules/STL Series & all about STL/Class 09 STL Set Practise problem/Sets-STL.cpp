//In the name of Allah
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin >> q;
    set<int> st;

    while(q -- )
    {
        int y, x;
        cin >> y >> x;


        if(y == 1) st.insert(x);
        else if(y == 2) st.erase(x);
        else 
        {
            if(st.count(x) == 1)
            {
                cout<< "Yes" << "\n";
            }
            else
            {
                cout<< "No" << "\n";
            }
        }
    }


    return 0;
}