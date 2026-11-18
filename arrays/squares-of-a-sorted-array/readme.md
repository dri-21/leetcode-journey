Squares of a Sorted Array — #977

Difficulty: Easy
Topic: Arrays, Sorting
Status: Implementation in progress — submission verdict not confirmed

Approach

Square every element in the input array.

Sort the squared elements using Bubble Sort.

Return the resulting array.

Mistakes & Learnings

Initially understood that every element needed to be squared before sorting.

Needed clarification on how to swap   elements correctly using a temporary variable.

Had to correct the returnSize assignment:

*returnSize = numsSize;

Important C/LeetCode detail: the returned result must be a newly allocated array (malloc), rather than simply returning the input nums pointer.

Complexity

Time: O(n²) — squaring takes O(n), Bubble Sort takes O(n²).

Auxiliary space: O(1) for the sorting logic, excluding the required output allocation.

Key Learning

Practised implementing Bubble Sort independently.

Understood how adjacent-element comparisons and swaps move larger values towards the end of the array.

Learned to pay attention to LeetCode's function return requirements, not just the algorithm.
