
// (i prefer to use macro instead of typedef)
The `typedef` keyword in C++ is used to create an alias for an existing data type.
 This can make code more readable and easier to manage, especially when dealing with complex data types.

### Basic Syntax

typedef existing_type new_type_name;
// basically as like as #define macro_name value, (i prefer to use macro instead of typedef)
### Examples

#### 1. Simple Typedef
```cpp
#include <iostream>
using namespace std;

typedef int Integer;

int main() {
    Integer a = 10;
    cout << "Value of a: " << a << endl;
    return 0;
}


#### 2. Typedef for Struct

#include <iostream>
using namespace std;

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p1;
    p1.x = 10;
    p1.y = 20;
    cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << endl;
    return 0;
}
```

#### 3. Typedef for Function Pointer

#include <iostream>
using namespace std;

typedef void (*FuncPtr)(int);

void printNumber(int num) {
    cout << "Number: " << num << endl;
}

int main() {
    FuncPtr ptr = printNumber;
    ptr(5);
    return 0;
}


### Explanation
1. **Simple Typedef**: Creates an alias `Integer` for the `int` type.
2. **Typedef for Struct**: Creates an alias `Point` for a struct with two integer members.
3. **Typedef for Function Pointer**: Creates an alias `FuncPtr` for a pointer to a function that takes an `int` and returns `void`.

Using `typedef` can simplify complex type declarations and improve code readability.

*/