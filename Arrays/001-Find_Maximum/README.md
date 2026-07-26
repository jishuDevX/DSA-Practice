# 001. Find Maximum Element in an Array

**Topic:** Arrays  
**Difficulty:** Easy  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given an array of integers, find the largest element in the array.

### Example

**Input**

```text
3 8 1 10 5
```

**Output**

```text
10
```

---

## Approach

This solution uses **recursion**.

- Initialize the maximum with the first element of the array.
- Compare the current element with the current maximum.
- Update the maximum when a larger element is found.
- Recursively process the remaining elements until all elements have been checked.

---

## Complexity

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** |
| **Space Complexity** | **O(n)** (Recursive call stack) |

---

## Files

| File | Description |
|------|-------------|
| `solution.c` | Recursive solution implemented in C |