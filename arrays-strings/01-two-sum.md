## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a brute-force approach by checking every pair of elements in the array. For each pair, I checked whether their sum equals the target. When a matching pair is found, I return their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution should handle duplicate values and return the indices of the two numbers whose sum equals the target.