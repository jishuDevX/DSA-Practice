# 006. Check if an Array is Sorted

**Topic:** Arrays  
**Difficulty:** Easy  
**Language:** C  
**Source:** Custom Practice

---

## Problem

Given an array of integers, determine whether the array is sorted in **ascending order**.

Print:

- `Array is sorted` if every element is less than or equal to the next element.
- `Array is not sorted` otherwise.

### Example 1

**Input**

```text
Array = {1, 2, 3, 4, 5}
```

**Output**

```text
Array is sorted
```

### Example 2

**Input**

```text
Array = {1, 2, 5, 4, 6}
```

**Output**

```text
Array is not sorted
```

---

## Approach

- Traverse the array from the first element to the second-last element.
- Compare each element with its next element.
- If any element is greater than the next element, return that the array is not sorted.
- If the traversal completes without finding such a pair, the array is sorted.

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
| `solution.c` | C implementation to check whether an array is sorted in ascending order. |