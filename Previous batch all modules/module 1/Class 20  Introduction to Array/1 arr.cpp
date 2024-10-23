int arr[n];

int - data type
arr - array name
n - size of array

after last index, array has an end point, which is not a part of array
which means arr[n] is not a part of array, it is just an end point


//int arr[5] = {1, 2, 3, 4, 5};

when loop will start with 1  based index
ex: 

int arr[5];

for(int i = 1; i <= 5; i++)
{
    cout << arr[i] << " ";
}

in this case, it will print garbage value, bcz we 
are trying to access the value which is not a part of array or something else
so the array size should be int arr[5+2] or something...


--> globally memeory besi thake
--> Example: On most systems, you might be able to declare a global array
 of up to approximately 10^8 to 10^9 elements (e.g., int arr[100000000];)

--> The maximum size for a local array is typically around 10^5 to 10^6 elements
 (e.g., int arr[100000];), but attempting to declare a larger array may lead to a stack overflow error.