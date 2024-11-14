#include<bits/stdc++.h>
using namespace std;

int main()
{

   //multiset keeps all elements sorted by default
   //IT allows duplicates values
   //It is implemented using BST=>log(n) time complexity for insertion,deletion,searching
   
   //declaration of multiset
   multiset<int> st;


   //inserting elements in multiset
   st.insert( 1 ); 
   st.insert( 3 );
   st.insert( 1 ); 
   st.insert( 3 );
   st.insert( 1 );
   st.insert( 4 );
   st.insert( 2 );
   st.insert( 5 );
   st.insert( 2 );

  cout<< "size of multiset : " << st.size() << endl;  //Output: 9
  cout<< "element 1 appers " << st.count( 1 ) << " times" << endl;
  //A good way to count the number of times an element appears in a multiset

  //Iterating over the multiset
  for(auto u : st) cout<< u << " ";
  cout<< endl;
  //Output: 1 1 1 2 2 3 3 4 5  => all elements are sorted with duplicates



   //deleting elements from multiset
   st.erase( 1 ); //deletes all occurences of 1
   //now multiset contains 2 2 3 3 4 5


  //Delete only one occurence of 2(number)
  auto it = st.find( 2 );
  st.erase( it );
  //now multiset contains 2 3 3 4 5  
  // only one occurence of 2 is deleted by taking address of first occurence of 2


 
   //learn by yourself how to use lower_bound,upper_bound,equal_range with multiset

    return 0;
}