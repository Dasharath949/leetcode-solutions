## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency-counting approach. I created an array of 26 integers to count how many times each lowercase letter appears in the first string. I then subtract the counts using the second string. If all counts become zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution handles strings with the same letters in different orders. It also correctly returns false when the character frequencies are different.