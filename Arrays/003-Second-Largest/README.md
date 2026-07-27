# 003. Find Second Largest Distinct Element

**Topic:** Arrays  
**Difficulty:** Easy  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given an array of integers, find the **second largest distinct element** in the array.

If no second largest distinct element exists, print an appropriate message.

### Example 1

**Input**

```text
Array = {3, 8, 1, 10, 5}
```

**Output**

```text
Second largest element = 8
```

### Example 2

**Input**

```text
Array = {10, 10, 10}
```

**Output**

```text
No second largest element exists.
```

---

## Approach

- Validate that the array contains at least two elements.
- Initialize `largest` and `second_largest` with `INT_MIN`.
- Traverse the array only once.
- If the current element is greater than `largest`:
  - Update `second_largest` with the previous `largest`.
  - Update `largest`.
- Otherwise, if the current element is greater than `second_largest` and is not equal to `largest`, update `second_largest`.
- After traversal, print the second largest element if it exists; otherwise, print an appropriate message.

---

## Complexity

| Complexity | Value |
|------------|-------|
| Time Complexity | **O(n)** |
| Space Complexity | **O(1)** |

---

## Files

| File | Description |
|------|-------------|
| `solution.c` | One-pass C solution to find the second largest distinct element in an array. |