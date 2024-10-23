1.  Bitwise Operations and Last Five Year ACM ICPC Preliminary Contests Easiest Problem
2.  Bitwise operators OR(|), AND(&), XOR(^)
3.  Patterns in XOR
4.  An interesting Google interview question with XOR



Topic: Bitwise Operations :
............................
1.  Bitwise operators OR(|): 

3 or 4 
3 | 4 

3 = 011
4 = 100
7 = 111 = 7 (decimal)

*here is code :
#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4;
    cout << (a | b) << endl;  // output: 7
    return 0;
}



note : if both bits are different, then the result is similar to adding the numbers. 
       if both bits are the same, then the result is the same as the number itself.
       0 | 0 = 0
       0 | 1 = 1
       1 | 0 = 1
       1 | 1 = 1

note : even number's last bit 0, odd number's last bit 1
       3 = 011
       4 = 100
