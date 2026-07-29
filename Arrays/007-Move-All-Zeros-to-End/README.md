# 007. Move All Zeros to the End

**Topic:** Arrays  
**Difficulty:** Easy  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given an array of integers, move all the **0s** to the **end** of the array while maintaining the **relative order of the non-zero elements**.

The operation must be performed **in-place** without using an additional array.

### Example 1

**Input**

```text
Array = {0, 1, 0, 3, 12}
```

**Output**

```text
Array = {1, 3, 12, 0, 0}
```

### Example 2

**Input**

```text
Array = {1, 2, 3}
```

**Output**

```text
Array = {1, 2, 3}
```

### Example 3

**Input**

```text
Array = {0, 0, 0}
```

**Output**

```text
Array = {0, 0, 0}
```

---

## Approach

- Initialize a pointer `j` to track the position where the next non-zero element should be placed.
- Traverse the array from left to right.
- Whenever a non-zero element is found:
  - Copy it to index `j`.
  - Increment `j`.
- After processing all elements, fill the remaining positions from `j` to the end of the array with `0`.

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
| `solution.c` | In-place C implementation to move all zero elements to the end while preserving the order of non-zero elements. |