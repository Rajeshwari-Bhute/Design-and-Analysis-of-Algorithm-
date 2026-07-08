# Design and Analysis of Algorithms

![Typing Animation](https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&pause=1000&color=00BFFF&center=true&vCenter=true&width=700&lines=Design+and+Analysis+of+Algorithms)

> “Algorithms are the language of problem solving.”

### 🧠 Quicksort flowchart (Mermaid)

```mermaid
flowchart TD
    A[Start] --> B[Input array A and n]
    B --> C[Choose pivot element]
    C --> D[Partition array into left(<=pivot) and right(> pivot)]
    D --> E{Is left subarray size > 1?}
    E -->|Yes| F[Apply Quicksort recursively on left subarray]
    E -->|No| G[Left subarray sorted]
    D --> H{Is right subarray size > 1?}
    H -->|Yes| I[Apply Quicksort recursively on right subarray]
    H -->|No| J[Right subarray sorted]
    F --> K[Combine sorted left, pivot, and sorted right]
    I --> K
    G --> K
    J --> K
    K --> L[Output sorted array]
    L --> M[End]
```

This repository contains implementations of classic algorithms as part of my **Design and Analysis of Algorithms** coursework and personal practice.  
The goal is to write clean, well-documented code and to analyze the **time and space complexity** of each algorithm.

---

## 🚀 Current implementation: Quicksort in C

**File:** `Quik_sort.c`  

This program:

- Takes input from the user for the number of elements and the array.  
- Sorts the array using the **quicksort** algorithm (divide and conquer).  
- Displays the sorted output to the user.

### 🔍 Algorithm overview

Quicksort is a fast comparison-based sorting algorithm that uses the divide and conquer paradigm.  
It chooses a **pivot**, partitions the array into elements less than and greater than the pivot, and recursively sorts the subarrays.

### ⏱️ Complexity analysis

- Best case: O(n log n)  
- Average case: O(n log n)  
- Worst case: O(n²) (occurs when the pivot selection is poor)  

Space complexity:

- In-place algorithm with additional space used by recursion calls (O(log n) on average).
