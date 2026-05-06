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

### 1. Iterative Approach (Greedy)
- Track:
  - Top 3 maximum values
  - Bottom 2 minimum values
- Compare both possible products

*Time Complexity:* O(n)  
*Space Complexity:* O(1)

---

### 2. Sorting Approach
- Sort the array
- Compare:
  - Last 3 elements
  - First 2 elements × last element

**Time Complexity:** O(n log n)  
**Space Complexity:** O(1)

---

### 3. Recursive Approach (Brute Force)
- Try all combinations of picking 3 elements

**Time Complexity:** O(2^n)  
**Space Complexity:** O(n)

---

## Complexity Comparison

| Approach   | Time Complexity |
|------------|-----------------|
| Iterative  | O(n)            |
| Sorting    | O(n log n)      |
| Recursive  | O(2^n)          |

