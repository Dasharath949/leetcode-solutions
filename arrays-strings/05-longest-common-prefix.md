# Longest Common Prefix

## Problem / Difficulty
Longest Common Prefix — Easy

## Link
https://leetcode.com/problems/longest-common-prefix/

## Approach
Compare characters of all strings column by column using the first string as the reference. If a character differs or a string ends, return the common prefix found so far.

## Complexity
- Time: O(n × m), where n is the number of strings and m is the length of the shortest string.
- Space: O(m) for the returned prefix.

## Notes
The solution was tested locally with two test cases and submitted successfully on LeetCode.

LeetCode Result:
- Accepted
- 126/126 test cases passed
- Runtime: 0 ms
- Memory: 8.82 MB