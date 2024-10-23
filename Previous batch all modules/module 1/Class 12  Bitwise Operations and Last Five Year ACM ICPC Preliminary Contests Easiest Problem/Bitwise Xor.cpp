# Bitwise AND Operations:
............................
# 3 Bitwise operators XOR(^): //bit same hole 0, otherwise 1
                              // odd number 1 thakle 1. even number 0 thakle 0

17 XOR 12

17 = 10001
12 = 01100
...............
29 = 11101   

*here is the code : 
#include <iostream>
using namespace std;

int main()
{
    int a = 17, b = 12;
    int ans = a ^ b;
    cout << ans << endl;  // output: 29
}


# If both digits are same then xor value will 0;
if 5 ^ 5 = 0, cz 5 = 101, 5 = 101, 0 = 000
if 5 ^ 5 ^ 5 = 5;
if 5 ^ 5 ^ 3 = 3; five-five vanish, then 3 will exist.


# NOte :  if any number xor with 0, then the ans will be the number itself.
        5 ^ 0 = 5
        5 ^ 5 = 0
        5 ^ 5 ^ 5 = 5
        5 ^ 5 ^ 3 = 3; five-five vanish, then 3 will exist.



Example 2 : 

3 ^ 5 ^ 10;

3  = 0011
5  = 0101
10 = 1010
..............
12 = 1100  ans.


// https://drive.google.com/file/d/1wNPuFbyqpQkFp4JQEoLu4VSeZ0oCJ94H/view