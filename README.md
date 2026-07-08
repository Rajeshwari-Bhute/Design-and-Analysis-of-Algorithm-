# Design and Analysis of Algorithms

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

---

## 🧪 How to compile and run

You can compile and run the program on any system with a C compiler (such as `gcc`):

```bash
gcc Quik_sort.c -o quicksort
./quicksort
```

Steps:

1. Compile the file using the command above.
2. Run the generated executable.
3. Enter the size of the array and the elements when prompted.
4. View the sorted output.

---

## 📚 Learning focus

Through this repository, I aim to:

- Implement algorithms in C with clear and readable code.
- Understand and explain **time complexity**, **space complexity**, and **algorithm design techniques** (like divide and conquer).
- Practice writing technical documentation that is easy to understand for both teachers and recruiters.

---

## 📈 Planned additions

I plan to add more algorithms with proper documentation and analysis, such as:

- Merge sort  
- Heap sort  
- Binary search  
- Selection sort / Insertion sort  
- Graph algorithms (DFS, BFS, shortest path)  

Each algorithm will include:

- Code implementation in C.  
- Explanation of how the algorithm works.  
- Time and space complexity analysis.  
- Comments in code for clarity.

---

## 👩‍💻 About the author

**Name:** Rajeshwari Bhute  
**Location:** Maharashtra, India  

I am a student interested in **Data Structures**, **Algorithms**, and **problem-solving in C/C++**.  
This repository is part of my journey to build a strong foundation in algorithms and to showcase my work to teachers and future employers.
