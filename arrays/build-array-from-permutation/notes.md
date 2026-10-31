# Build Array from Permutation — LeetCode 1920

## Approach
- Create a new array using dynamic memory allocation.
- Traverse the input array using one loop.
- Calculate `nums[nums[i]]` for every index.
- Store the result in the new array.
- Return the array.

## Complexity
- Time: O(n)
- Auxiliary space: O(1)
- Output space: O(n)

## Key Learnings
- Array indexing in C.
- Nested array indexing: `nums[nums[i]]`.
- Dynamic memory allocation using `malloc()`.
- Returning an allocated array.

## Learning Status
Implemented independently with a small reminder about the return statement.
