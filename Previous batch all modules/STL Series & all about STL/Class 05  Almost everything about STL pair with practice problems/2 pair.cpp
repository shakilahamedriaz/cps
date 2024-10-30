#include<bits/stdc++.h>
using namespace std;

int main()
{

  cout<< "Topic 1 : " <<endl;
  cout<<endl;
  
  pair<string, vector<int>> p;
  p.first = "abc";
  p.second = {1,2,3,4};

  cout<< "Here is the first element of the pair: " << endl;
  cout<< p.first << endl;

  cout<< "Here is the second element of the pair: " << endl;
  
  for(auto u : p.second)  cout<< u << " ";
  cout<< endl;
  cout<<endl;



  cout<< "Topic 2 : " <<endl;
  cout << endl;

  pair< int, int > q ;
  q = make_pair(2, 3);

  cout<< q.first<< " " << q.second << endl;
  cout<<endl;
  q.first ++;
  cout<< q.first << endl;
  cout<< endl;

  pair < int , int > d;
  d = {44, 46};
  cout<< d.first << " " << d.second << endl;

  pair < string , int > m;
  m = { "shakil", 995};
  cout<< m.first << " " << m.second << endl;
  cout<<endl;


  cout<< "Topic 3 : " <<endl;
  cout<<endl;

  pair < string, vector< int > > p1;
  p1 = { "Allah_Hu_Akbar", {1,2,3,4,5,6,7,8,9,10} };

  cout<< "Here is the first element of the pair: " << endl;
  cout << p1.first << endl;
  cout<< "Size of the second element(vector) of the pair: " << endl;
  cout<< p1.second.size() << endl;

  for(auto it : p1.second)  cout<< it << " ";
  cout<<endl;


  cout<< "Topic 4 : "<<endl;
  cout<< endl;

  pair < int , int > o, k;
  o = {2, 3};
  k = {4, 5};

  if(o < k) cout<< "o is less than k" << endl;
  else cout << "o is not less than k" << endl;

  cout<<endl;

  pair <int , int > a1, a2;
  a1 = {2, 8};
  a2 = {2, 5};

  if(a1 == a2) cout<< "a1 is equal to a2" << endl;
  else if(a1 < a2) cout<< "a1 is less than a2" << endl;
  else cout<< "a1 is greater than a2" << endl;
  
  cout<<endl;

  pair< int, int > b1, b2;
  b1 = {2, 3};
  b2 = {1, 6};

  pair< int , int > mn = min(b1,b2);
  cout<< mn.first << " " << mn.second << endl;
  cout<< endl;
  
  cout<< "Topic 5 : " <<endl;
  cout<< endl;

  vector< pair< int, int > > vr;

  vr.push_back({2,3});
  vr.push_back({4,5});
  vr.push_back({6,7});
  vr.push_back({6,2});
  vr.push_back({4,1});
  vr.push_back({1,9});
  vr.push_back({4,6});

  sort(vr.begin(), vr.end());
  cout<< "Increasing order of the pairs: " << endl;
  for(auto u : vr) cout<< u.first << " " << u.second << endl;

  cout<<  "Decreasing order of the pairs: " << endl;
  sort(vr.rbegin(), vr.rend());
  for(auto u : vr) cout<< u.first << " " << u.second << endl;
  cout<< endl;
  cout<< endl;

  pair< int, int > arr[] = { {2,3}, {4,5}, {6,7}, {6,2}, {4,1} };
  
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr + n);

  for(int i = 0; i < n; i++) cout<< arr[i].first << " " << arr[i].second << endl;
  //comparison will start from first value, then second value, then third value, and so on.

  cout<< endl;

  cout<< "Topic 6" <<endl;cout<<endl;

  vector< pair <string, int > > vt;

  vt.push_back({"shakil" , 66});
  vt.push_back({"Asif", 77});
  vt.push_back({"Ahmed", 88});
  vt.push_back({"Ali", 99});
  vt.push_back({"Ahmed", 100});

  sort(vt.begin(), vt.end());

  for(auto it : vt) cout<< it.first << " " << it.second << endl;

  return 0;
}