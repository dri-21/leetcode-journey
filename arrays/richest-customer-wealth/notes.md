# Richest Customer Wealth — LeetCode 1672

## Approach
- Traverse each customer using an outer loop.
- Reset `sum = 0` for each customer.
- Use an inner loop to add all account balances.
- Compare the customer's total with `maxwealth`.
- Return the maximum wealth.

## Complexity
- Time: O(m × n)
- Auxiliary space: O(1)

## Key Learnings
- 2D array traversal in C.
- Nested loops.
- Row-wise summation.
- Tracking a maximum value.
- Correct placement of loop conditions and return statements.

