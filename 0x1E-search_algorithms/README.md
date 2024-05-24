0x1E-search_algorithms

1. Linear Search Time Complexity (worst case): O(n)
   Explanation: In the worst case scenario, the linear search algorithm needs to iterate through all n elements in the array to find the target value.

2. Iterative Linear Search Space Complexity (worst case): O(1)
   Explanation: The space complexity of the iterative linear search algorithm is constant because it only uses a fixed amount of memory for storing variables, regardless of the size of the input array.

3. Binary Search Time Complexity (worst case): O(log n)
   Explanation: In the worst case scenario, the binary search algorithm divides the search space in half with each iteration, resulting in a time complexity of O(log n).

4. Binary Search Space Complexity (worst case): O(1)
   Explanation: The binary search algorithm operates on the input array without requiring additional space proportional to the size of the array. Therefore, its space complexity is constant, O(1).

5. Space Complexity of allocate_map function: O(n * m)
   Explanation: The function allocates memory for a 2D array of size n x m using dynamic memory allocation. The space complexity is O(n * m) because it allocates space for n arrays of size m.

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

To determine the space complexity of a function or algorithm, you need to analyze the amount of memory it consumes as a function of the input size. Here's how you can find out the space complexity of the `allocate_map` function:

1. **Identify the variables and data structures**: In this case, the primary data structure is a 2D array represented by a pointer to pointers (`int **map`).

2. **Analyze memory usage**:
   - The function allocates memory for `n` pointers to `int` (each pointer is `sizeof(int *)` bytes).
   - Then, for each of these `n` pointers, memory is allocated for `m` integers (each integer is `sizeof(int)` bytes).

3. **Calculate total memory usage**:
   - Memory for the outer array `map` is n * {size of pointer}
   - Memory for each inner array (row) is m * {size of integer}
   - So, the total memory usage is the sum of memory for `map` and memory for all the inner arrays.

4. **Determine the dominating term**:
   - As \( n \) and \( m \) both contribute to the total memory usage, the space complexity is O(n * m)

5. **Consider constants and lower-order terms**:
   - If there are any constants or lower-order terms, they are generally ignored in Big O notation. In this case, since we are primarily concerned with how memory usage scales with input size, we focus on the dominating term (n * m).

6. **Conclusion**:
   - The space complexity of the `allocate_map` function is O(n * m), where \( n \) and \( m \) are the dimensions of the 2D array.

The time complexity of a jump search in an array of size \( n \), using a step size of sqrt(n), can be analyzed as follows:

1. **Jumping Phase:** In the jumping phase, we iterate through the array in steps of sqrt(n). This phase takes O(sqrt(n)) time because we perform `n / √n = √n` comparisons.

2. **Linear Search Phase:** After identifying the block where the target element might be located, we perform a linear search within that block. The worst-case scenario for this phase is that the target element is located at the end of the block or is not present at all. Therefore, the linear search phase takes O(sqrt(n)) time.

Considering both phases, the overall time complexity of jump search with a step size of sqrt(n) is O(sqrt(n)) in the average case.

This analysis assumes that the cost of performing comparisons dominates the runtime, and the number of comparisons is proportional to the running time.
