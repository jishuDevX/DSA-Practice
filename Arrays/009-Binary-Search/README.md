# 009. Binary Search (Iterative)

**Topic:** Arrays  
**Difficulty:** Easy → Medium  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given a **sorted** array of integers and a target value, determine whether the target exists using the **Binary Search** algorithm.

Return the index of the target if found; otherwise, return `-1`.

### Example 1

**Input**

```text
Array = {2, 4, 6, 8, 10, 12, 14}
Target = 10
```

**Output**

```text
Element found at index 4
```

### Example 2

**Input**

```text
Array = {2, 4, 6, 8, 10, 12, 14}
Target = 5
```

**Output**

```text
Element not found.
```

---

## Approach

- Initialize two pointers:
  - `low = 0`
  - `high = n - 1`
- While `low <= high`:
  - Find the middle index.
  - If the middle element matches the target, return its index.
  - If the target is greater, search the right half.
  - Otherwise, search the left half.
- Return `-1` if the target is not found.

---

## Complexity

| Complexity | Value |
|------------|-------|
| Time Complexity | **O(log n)** |
| Space Complexity | **O(1)** |

---

## Files

| File | Description |
|------|-------------|
| `solution.c` | Iterative Binary Search implementation in C for a sorted array. |