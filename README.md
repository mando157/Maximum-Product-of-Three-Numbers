# Maximum Product of Three Numbers

## Problem
Find the maximum product of any three elements in an array.  
The array may contain negative numbers.

---

## Key Insight
The maximum product can come from:
- The three largest numbers
- OR the two smallest numbers (negative) and the largest number

---

## Algorithms Used

### 1. Iterative Approach
- Track:
  - Top 3 maximum values
  - Bottom 2 minimum values
- Compare both possible products

*Time Complexity:* O(n)  
*Space Complexity:* O(1)

---

### 2. Recursive Approach
- Try all combinations of picking 3 elements

**Time Complexity:** O(2^n)  
**Space Complexity:** O(n)

---

## Complexity Comparison

| Approach   | Time Complexity |
|------------|-----------------|
| Iterative  | O(n)            |
| Recursive  | O(2^n)          |

