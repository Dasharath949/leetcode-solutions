# Binary Search

## Problem / Difficulty
Binary Search — Easy–Medium

## Link
https://leetcode.com/problems/binary-search/

## Approach
Use two pointers, `left` and `right`, to represent the current search range. Find the middle element and compare it with the target. If the target is larger, search the right half; if smaller, search the left half. Continue until the target is found or the range becomes empty.

## Complexity
- Time: O(log n)
- Space: O(1)

## Notes
The solution was tested locally with two test cases and submitted successfully on LeetCode.

LeetCode Result:
- Accepted
- 47/47 test cases passed
- Runtime: 0 ms
- Memory: 9.96 MB