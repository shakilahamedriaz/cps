#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie();
   
    
    int a, b;
    cin >> a >> b;

    int p1 = a + b;
    int p2 = a * b;

    int add = p1 + p2;

    string ans = to_string(add);
    cout<< ans <<endl;
   

    bool ok = true;
    for(int i = 0; i < ans.size(); i++)
    {
        if(ans[i] != '1')
        {
            ok = false;
            break;
        }
    }

    if(ok)
    {
        cout<< "Yes" << "\n";
    }
    else
    {
        cout<< "No" << "\n";
    }
    
    
    return 0;
}