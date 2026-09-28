## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer approach. One pointer starts from the beginning and another starts from the end. I swap the characters at these positions and move both pointers toward the center until the string is reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution works for a single-character string as well as longer strings. The string is reversed in-place without using another array.