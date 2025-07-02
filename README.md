# DSA
# Two Sum Problem - Data Structures & Algorithms

## 💡 Problem Statement
Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input has exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

---

## 🧩 Example
**Input:**  
nums = [2,7,11,15], target = 9

**Output:**  
[0,1]

**Explanation:**  
nums[0] + nums[1] == 9

---

## 🛠️ Approach
- Used a HashMap to store each number and its index while iterating.
- For each element, checked if `target - nums[i]` exists in the map.
- If found, returned the indices.

Time Complexity: **O(n)**  
Space Complexity: **O(n)**

---

## 🧑‍💻 Language
Implemented in **C**.

---

---
