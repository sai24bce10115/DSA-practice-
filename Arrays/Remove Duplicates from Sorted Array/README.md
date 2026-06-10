Problem: Remove Duplicates from Sorted Array
Difficulty: Easy
Platform: Leetcode
Approach: Use 2 pointers (i and j), one to keep a track of unique elements and another to traverse the array. 
If a unique element is found increment i and store the element at that position, traverse all elements in the array using j.
Return the number of unique elements in the array (i+1).
Time Complexity:
O(n)
Space Complexity:
O(1)

