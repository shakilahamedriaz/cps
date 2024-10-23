# Bitwise AND Operations:
............................
# 2.  Bitwise operators AND(&):

example 1 : 
.............
3 and 4
3 & 4

3 = 011
4 = 100
0 = 000 = 0 (decimal)


*here is code :
#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4;
    cout << (a & b) << endl;  // output: 0
    return 0;
}



example 2 :
............

3 & 5

3 = 011
5 = 101
1 = 001 = 1 (decimal)



example 3 :
............

13 & 9

13 = 1101
9  = 1001   // 9 er sob gula bit 13 er bit gular maje available
            // 9 bits are subset of 13 bits, So ans is 9 othoba 9's bits decimal;
9  = 1001             