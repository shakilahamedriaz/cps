#include<bits/stdc++.h>
using namespace std;

int main()
{
   

   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, k;
   cin >> n >> k;
   int arr[n];
   for(int i = 0; i < n; i++) cin >> arr[i];

   vector< pair<int, int > > v;

   set <int > st;
   for(int i = 0; i < n; i++)
   {
         if(st.find(arr[i] - k) != st.end())
         {
              v.push_back({arr[i], arr[i] - k});
         }
         if(st.find(arr[i] + k) != st.end())
         {
              v.push_back({arr[i], arr[i] + k});
         }
         st.insert(arr[i]);
   }


  
   sort(v.begin(), v.end());
   int uniqueSize = unique(v.begin(), v.end()) - v.begin();
   cout<< uniqueSize << "\n";


    return 0;
}