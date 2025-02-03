#include<bits/stdc++.h>
using namespace std;

bool isBalanced ( char c1, char c2)
{
     if( c1 == '(' && c2 == ')' )
     return true;
     if( c1 == '{' && c2 == '}' )
     return true;
     if( c1 == '[' && c2 == ']' )
     return true;
     
     return false;
}

int main()
{
     int tc;
     cin >> tc;
     while( tc-- )
     {
        string s;
        cin >> s;

        stack < char > st;
        bool done = 1;

        for(auto u : s)
        {
            if(u == '(' || u == '{' || u == '[')
            {
                st.push(u);    
                               
            }
            else
            {
                if(st.empty())
                {
                    done = 0;
                    break;
                }
                else
                {
                    if(isBalanced(st.top(), u)) 
                    {
                        st.pop();
                    }
                    else
                    {
                        done = 0;
                        break;
                    }
                }

            }
        }
       
         if( ! st.empty() ) done = 0;
         
         if(done) cout << "YES" << endl;
         else cout << "NO" << endl;

     }

     return 0;
}