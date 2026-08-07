# 011. Bubble Sort

**Topic:** Arrays  
**Difficulty:** Easy  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given an array of integers, sort the array in **ascending order** using the **Bubble Sort** algorithm.

### Example 1

**Input**

```text
Array = {5, 2, 8, 1, 9}
```

**Output**

```text
Array = {1, 2, 5, 8, 9}
```

### Example 2

**Input**

```text
Array = {4, 3, 2, 1}
```

**Output**

```text
Array = {1, 2, 3, 4}
```

---

## Approach

- Traverse the array multiple times.
- Compare each pair of adjacent elements.
- Swap them if they are in the wrong order.
- After each pass, the largest unsorted element moves to its correct position at the end of the array.
- Repeat until the entire array is sorted.

---

## Complexity

| Complexity | Value |
|------------|-------|
| Time Complexity | **O(n²)** |
| Space Complexity | **O(1)** |

---

## Files

| File | Description |
|------|-------------|
| `solution.c` | Bubble Sort implementation in C using adjacent element swapping. |