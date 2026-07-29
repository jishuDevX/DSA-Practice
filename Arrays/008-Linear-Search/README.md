# 008. Linear Search

**Topic:** Arrays  
**Difficulty:** Easy  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given an array of integers and a target value, determine whether the target exists in the array.

If found, return the index of its **first occurrence**. Otherwise, return `-1`.

### Example 1

**Input**

```text
Array = {5, 8, 2, 10, 7}
Target = 10
```

**Output**

```text
Element found at index 3
```

### Example 2

**Input**

```text
Array = {5, 8, 2, 10, 7}
Target = 6
```

**Output**

```text
Element not found.
```

---

## Approach

- Traverse the array from left to right.
- Compare each element with the target value.
- If a match is found, return its index immediately.
- If the traversal completes without finding the target, return `-1`.

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
| `solution.c` | C implementation of Linear Search that returns the index of the first occurrence of the target element. |