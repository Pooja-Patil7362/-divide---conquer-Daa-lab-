# Fake Coin Problem (Divide and Conquer)

## Problem
Given n coins where one coin is fake (lighter), find the fake coin using divide and conquer.

## Approach
1. Divide coins into two halves
2. Compare total weight of both halves
3. Recurse into lighter half
4. Continue until one coin remains

## Time Complexity
- O(n log n)

## Space Complexity
- O(log n) (recursion)

## Example
Input: 2 2 2 1 2  
Output: Fake coin at index 3