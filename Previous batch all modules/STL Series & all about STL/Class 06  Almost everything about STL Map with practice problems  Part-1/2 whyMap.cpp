#include<bits/stdc++.h>
using namespace std;

int cnt[100123];

int main()
{

    vector<int> v = {1, 1, 1, 3, 4, 5, 6, 7, 6, 6, 6, 4, 4, 3, 5 ,5 };
    for(auto u : v)
    {
        cnt[u] ++;
    }
    
    vector<int> ans;

    sort(v.begin(), v.end());
    int sz = unique(v.begin(), v.end()) - v.begin();
    for(int i = 0; i < sz; i++) ans.push_back(v[i]);

    for(auto u : ans)
    {
        cout << u << " " << cnt[u] << endl;
    }

    return 0;
}


// this avobe procedure can be done by map, that is more easy and efficient
//map is a data structure that stores key-value pairs.
//map is a red-black tree based implementation of a self-balancing binary search tree.
//map is ordered, which means that the elements in the map are ordered according to the key.
//map is a associative container that is used to store key-value pairs.
// syntax: map<key_type, value_type> map_name;
//example: map<int, int> m; 
// we can put different data types in map, like map<int, string> m1; map<string, int> m2; map<char, int> m3; map<int, char> m4;

//here is a avobe main code using map : 
  
  /*
  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    vector<int> v = {1, 1, 1, 3, 4, 5, 6, 7, 6, 6, 6, 4, 4, 3, 5 ,5 };
    for(auto u : v)
    {
        m[u] ++;
    }
    
    for(auto u : m)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}

*/