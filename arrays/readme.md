LeetCode Progress Log

1. Contains Duplicate — #217

Difficulty: Easy
Topic: Arrays, Sorting
Status: Attempted — needs revision

Approach

Tried using Selection Sort to sort the array.

After sorting, planned to check adjacent elements for duplicates.

The logic was correct, but the approach was inefficient.

Mistakes & Learnings

Used Selection Sort, resulting in O(n²) time complexity.

Received TLE (Time Limit Exceeded) because the approach was too slow for larger inputs.

Learned that a correct approach is not necessarily an efficient approach.

Need to practise recognising when sorting is unnecessarily expensive and consider faster ways to detect duplicates.

Complexity

Time: O(n²)

Space: O(1)
