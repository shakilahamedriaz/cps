/// https://www.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1 - amazing question
// Difficulty: Medium

#include<bits/stdc++.h>
using namespace std;

string solution(string &str)
{

    string temp;
    vector<string> v;

    for(auto u : str)
    {
        if(isspace(u))  //the devil in the sky; output : the 2
        {
            v.push_back(temp);
            temp.clear();
        }
        else
        {
           temp += u;
        }

    }
    
    v.push_back(temp);
    map<string, int> cnt;

    int mxFrq = 0;

    for(auto u : v)
    {
        cnt[u]++;
        mxFrq = max( mxFrq, cnt[u]);
    }

    string ans;
    for(auto u : v)
    {
        if(cnt[u] == mxFrq)
        {
            ans = u;
            break;
        }
    }

    return ans + " " + to_string(mxFrq);

}

int main()
{
    int t;
    cin >> t;
   
    while( t-- )
    {
        string str;
        char c;
        cin >> c;
        getline(cin, str);
        str = c + str;

        cout<< solution(str) << "\n";
    }

    return 0;
}