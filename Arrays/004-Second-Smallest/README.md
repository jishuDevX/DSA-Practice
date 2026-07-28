# 004. Find Second Smallest Distinct Element

**Topic:** Arrays  
**Difficulty:** Easy  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given an array of integers, find the **second smallest distinct element** in the array.

If no second smallest distinct element exists, print an appropriate message.

### Example 1

**Input**

```text
Array = {3, 8, 1, 10, 5}
```

**Output**

```text
Second smallest element = 3
```

### Example 2

**Input**

```text
Array = {5, 5, 5}
```

**Output**

```text
No second smallest element exists.
```

---

## Approach

- Initialize `smallest` and `second_smallest` with `INT_MAX`.
- Traverse the array only once.
- If the current element is smaller than `smallest`:
  - Update `second_smallest` with the previous `smallest`.
  - Update `smallest`.
- Otherwise, if the current element is smaller than `second_smallest` and is not equal to `smallest`, update `second_smallest`.
- After traversal, print the second smallest element if it exists; otherwise, print an appropriate message.

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
| `solution.c` | One-pass C solution to find the second smallest distinct element in an array. |