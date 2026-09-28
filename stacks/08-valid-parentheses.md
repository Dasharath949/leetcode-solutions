# Valid Parentheses

## Problem / Difficulty
Valid Parentheses — Easy–Medium

## Link
https://leetcode.com/problems/valid-parentheses/

## Approach
Use a stack to store opening brackets. When a closing bracket is encountered, compare it with the most recent opening bracket. If they do not match, return false. At the end, the stack must be empty for the parentheses to be valid.

## Complexity
- Time: O(n)
- Space: O(n)

## Notes
The solution was tested locally with two test cases and submitted successfully on LeetCode.

LeetCode Result:
- Accepted
- 103/103 test cases passed
- Runtime: 0 ms
- Memory: 9.44 MB