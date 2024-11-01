#include<bits/stdc++.h>
using namespace std;


int main()
{  
    //map complexity : nlog2(n) for search, insert, delete
    // what is map?
    // map is a associative container that store elements in key value pair
    // map is a ordered container
    // map is a sorted container

    // Declaration of map
    // map<key_type, value_type> map_name;
    // map<key_type, value_type> map_name{{key1, value1}, {key2, value2}, {key3, value3}};


    // Initialization of map
    map<int, string> m;  //map key should be unique/distinct
    m[1] = "abc";
    m[2] = "def";
    m[3] = "ghi";
    m[4] = "jkl";
    m[5] = "mno";

    //print a specific value
    cout<<m[3]<<endl;  
    //output : ghi
    //iterating over map
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    //output : 
    // 1 abc
    // 2 def    
    // 3 ghi
    // 4 jkl
    // 5 mno

   //another example of map
   map<string, int > id;

    id["sharif"] = 1;
    id["shuvo"] = 2;
    id["sajib"] = 3;
    id["sakib"] = 4;
    id["israt"] = 5; 

    cout<< id["israt"]<<endl;
    //output : 5
    
    //iterating over map
    for(auto i : id)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //output : 
    // sharif 1
    // shuvo 2
    // sajib 3
    // sakib 4
    // israt 5
    
    map<string, string> gender;

    gender["shakil"] =  "male";
    gender["sharif"] = "female";

    cout<< gender["shakil"] << " " << gender["sharif"] << endl;
    //output : male female
    
    // Find the frequency of a vector element using map
    vector<long long> v = {1, 123233432232, 2334123345, 123233432232};
    map<long long, int> freq;

    for(int i = 0; i < v.size(); i++)
    {
        freq[v[i]]++;
    }

    //print a specific value
    cout<< freq[123233432232] << endl;
    //output : 2


    //map store data in sorted order
    vector<int> v1 = {1,7, 7, 3, 4 ,4 8, 8};
    map<int, int> mp;
    for(auto u : v1) mp[u]++;
    for(auto u : mp) cout<<u.first<<" "<<u.second<<endl;
    //output : 
    // 1 1
    // 3 1
    // 4 2
    // 7 2
    // 8 2

    //if string, then it will sorted lexicographically
    map<string, int > id;

    id["sharif"] = 1;
    id["shuvo"] = 2;
    id["sajib"] = 3;
    id["sakib"] = 4;
    id["israt"] = 5; 

    for(auto i : id)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    //output :
    // israt 5
    // sakib 4
    // sajib 3
    // sharif 1
    // shuvo 2
    
    //if char, then it will sorted lexicographically
    map<char, int> mp;
    mp['a'] = 1;
    mp['c'] = 2;
    mp['b'] = 3;
    mp['d'] = 4;

    for(auto i : mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //output :
    // a 1
    // b 3
    // c 2
    // d 4

    //Take input from user for map
    map<string, int> mmp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        mmp[s] = x;
    }
    


     
    


  return 0;
}