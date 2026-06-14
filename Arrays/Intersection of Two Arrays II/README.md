Problem: Intersection of Two Arrays II
Difficulty: Easy
Platform: Leetcode
Approach: Sort the array and use 2 pointer method to check which elements in both arrays are same and insert them in a vector.
Compare the elemnents of both the arrays and increment a given pointer if the element of that array is smaller than the element in
another array and increment both the pointers if a common element is found.
Time Complexity:
O(nlogn+mlogm)
Space Complexity:
O(n)

