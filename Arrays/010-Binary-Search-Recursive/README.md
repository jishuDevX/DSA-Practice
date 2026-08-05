# 010. Binary Search (Recursive)

**Topic:** Arrays  
**Difficulty:** Medium  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given a **sorted** array of integers and a target value, determine whether the target exists using the **Recursive Binary Search** algorithm.

Return the index of the target if found; otherwise, return `-1`.

### Example 1

**Input**

```text
Array = {2, 4, 6, 8, 10, 12, 14}
Target = 6
```

**Output**

```text
Element found at index 2
```

### Example 2

**Input**

```text
Array = {2, 4, 6, 8, 10, 12, 14}
Target = 9
```

**Output**

```text
Element not found.
```

---

## Approach

- If `low > high`, return `-1` (base case).
- Calculate the middle index.
- If the middle element matches the target, return its index.
- If the target is smaller than the middle element, recursively search the left half.
- Otherwise, recursively search the right half.
- Return the result of each recursive call to propagate the answer back to the caller.

---

## Complexity

| Complexity | Value |
|------------|-------|
| Time Complexity | **O(log n)** |
| Space Complexity | **O(log n)** *(recursive call stack)* |

---

## Files

| File | Description |
|------|-------------|
| `solution.c` | Recursive Binary Search implementation in C for a sorted array. |