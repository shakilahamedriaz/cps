** 🎯 Discussed topics:

1. More operators (+=, -=, =, /=, %= )
2. Increment, decrement
3. Pre increment / decreament
4. Post increment / decreament
5. Logical operators OR(||), AND(&&)



# 1 : More operators (+=, -=, =, /=, %= ) :
.............................................
- learn them

# 2 : Increment, decrement :
.............................................

- Increment : increase the value of a variable by 1
- Decrement : decrease the value of a variable by 1

- Increment : ++ (before or after the variable)
- Decrement : -- (before or after the variable)

- Example : 
int x = 5;
x++; // x = 6
x--; // x = 5

# 3 : Pre/ post --> increment :
.............................................

- Pre increment : ++x // 1st increase then save
- Pre decrement : --x // 1st decrease then save
- post increment : x ++ // save then increase
- post decreament : x -- // save then decrease 

Example 1: 
..........

a = 12;
b = a++;  //save then increase

print (a, b);
output : 13, 12

Example 2 : 
...........

a = 12;
b = ++ a;  // increase then save

print (a, b);
output : 13, 13



# 4 : Pre/ post -->  decreament :
..................................

Example 1;

a = 12;
c = a--;  //save then decrease

print (a, c);
output : 11, 12

Example 2 :

a = 12;
c = -- a;  // decrease then save

print (a, c);
output : 11, 11





Example 3 : (both pre and post increment / decrement) :
.........................................................

a = 12, b = 12;
c = --a;
d = b--;

print (a, b, c, d);
output : 11, 11, 11, 12
