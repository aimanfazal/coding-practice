# Coding Practice 💻

A collection of coding problems, algorithm implementations, and small programming exercises.

This repository serves as a personal archive for practicing problem-solving, improving programming skills, and exploring different approaches to common coding challenges.

---

## 📌 About

The purpose of this repository is to:

* Practice **data structures and algorithms**
* Improve **problem-solving skills**
* Maintain a record of solved problems
* Experiment with different programming techniques
* Track coding progress over time

Problems in this repository may come from platforms like:

* LeetCode
* Codeforces
* HackerRank
* CodeChef
* Interview practice questions
* Other miscellaneous coding challenges

---

## 🧠 Topics Covered

Some of the common topics included in this repository:

* Arrays
* Strings
* Hashing
* Recursion
* Sorting
* Searching
* Linked Lists
* Trees
* Graphs
* Dynamic Programming
* Greedy Algorithms
* Sliding Window
* Two Pointers
* Backtracking

---

## 💻 Languages Used

Problems in this repository may be solved using:

* C++
* Python
* Java

Most solutions focus on clarity, efficiency, and readability.

---

## 📄 Solution Format

Solutions may include:

* Problem description or link
* Approach or explanation
* Time complexity
* Space complexity
* Implementation

Example:

```cpp
// Example: Binary Search

int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
```

---

## 🎯 Goals

* Consistent coding practice
* Strengthen understanding of algorithms and data structures
* Build a reference for commonly used patterns and techniques

---

## 🚀 Usage

Feel free to explore the solutions, review different approaches, and use them for learning or practice.

---

## 📜 License

This repository is licensed under the **MIT License**.

---

## ⭐ Contributions

This is primarily a personal practice repository, but suggestions and improvements are always welcome.
