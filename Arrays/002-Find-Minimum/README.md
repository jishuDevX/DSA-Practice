# 002. Find Minimum Element in an Array

**Topic:** Arrays
**Difficulty:** Easy
**Language:** C
**Source:** Custom Practice

---

## Problem

Given an array of integers, find the smallest element in the array.

### Example

**Input**

```text
3 8 -2 10 5
```

**Output**

```text
-2
```

---

## Approach

This solution uses an **iterative approach**.

* Initialize the minimum element with the first element of the array.
* Traverse the array from left to right.
* Compare each element with the current minimum.
* Update the minimum whenever a smaller element is found.
* After traversing the entire array, return the minimum element.

---

## Complexity

| Complexity           | Value    |
| -------------------- | -------- |
| **Time Complexity**  | **O(n)** |
| **Space Complexity** | **O(1)** |

---

## Files

| File         | Description                         |
| ------------ | ----------------------------------- |
| `solution.c` | Iterative solution implemented in C |
