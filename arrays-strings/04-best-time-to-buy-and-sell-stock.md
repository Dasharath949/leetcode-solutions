## Problem: Best Time to Buy and Sell Stock (Easy–Medium)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the lowest price seen so far while scanning the array from left to right. For each price, I calculate the profit that would be made by selling at that price and update the maximum profit if necessary.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the prices continuously decrease, no profitable transaction is possible, so the answer is 0. The stock must be bought before it is sold.