## My implementation review

- Correctly used nested loops to examine each pair once.
- Started the inner loop at `i + 1` to avoid reusing the same element and checking pairs twice.
- Used `==` to compare the sum with the target.
- Allocated memory for two indices using `malloc()`.
- Set `*returnSize = 2` and returned the allocated array.
- Initialised `*returnSize = 0` and returned `NULL` as a fallback.

## Submission result

- Verdict: Accepted
- Approach: Brute force
- Time complexity: O(n²)
  

## Learning status

I can implement the brute-force approach and explain the purpose of both loops.
