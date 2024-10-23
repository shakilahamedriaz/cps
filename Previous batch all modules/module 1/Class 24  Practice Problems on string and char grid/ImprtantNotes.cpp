#subarray / sub segments of an array : serial + contiguous
.....................................

-> a contiguous part of an array/ por por kichu element nilei subarray hobe
-> ex : an aray a[] = {1,2,3,4,5,6,7}
   some subarray/subsegments are : {1,2,3}, {2,3,4}, {1,2,3,4,5,6,7}
   it can be single element like {1}, {2}, {3};
   not subarray : {1,3,5}, {1,2,4,5,6,7}



#subsequence of an array : serial only
..........................

-> a subsequence is a sequence that can be derived from an array by selecting zero 
   or more elements,without changing the order of the remaining elements.
-> elements gula serially thakbe, not necessarily contiguous ( por por);
-> ex : an aray a[] = {1,2,3,4,5,6,7}
   some subsequence are : {1,4,3,6}, {1}, {2}, {3}, {1,3,5}
   not subsequence : {2,1,3}, 


-> all subarray,subsegment called subsequences, but not all subsequences are subarray/subsegment



#sub String : serial + contiguous
.............

-> a substring is a contiguous sequence of characters within a string.
-> example : "abc" is a substring of "abcde" and "def" is a substring of "abcdef"


#distint : unique 
...........

-> a set of elements is distinct if no two elements are same.
-> ex : {1,2,3,4,5} is distinct, {1,2,3,4,4,5} is not distinct


#permutation : arrangement
........................

- >  a set where 1 to n all numbers are arranged in different ways.
- >  ex : 1,2,3 er permutation are : 123,132,213,231,312,321


#string anagram :
.................

-> two strings are anagram if one string can be formed by rearranging the characters of another string.
-> ex : "listen" and "silent" are anagram, "hello" and "world" are not anagram