# 005. Reverse an Array

**Topic:** Arrays  
**Difficulty:** Easy  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given an array of integers, reverse the elements **in-place** without using an additional array.

### Example 1

**Input**

```text
Array = {1, 2, 3, 4, 5}
```

**Output**

```text
Array = {5, 4, 3, 2, 1}
```

### Example 2

**Input**

```text
Array = {10, 20, 30, 40}
```

**Output**

```text
Array = {40, 30, 20, 10}
```

---

## Approach

- Initialize two pointers:
  - `start` at the beginning of the array.
  - `end` at the end of the array.
- Swap the elements at `start` and `end`.
- Move `start` forward and `end` backward.
- Repeat until both pointers meet or cross.

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
| `solution.c` | In-place C implementation to reverse an array using the two-pointer technique. |