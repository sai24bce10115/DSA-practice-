Problem: Two Sum 
Platform: Leetcode
Diffculty: Easy
Approach:
Use two pointer method to find the elements whose sum is equal to the target element. 
Sort the array and store the original index of the elements in a separate vector
Use left and right pointers to traverse the array 
until the target is found or both the pointers point to the same location.
Time Complexity:
O(nlog(n))
Space Complexity:
O(1)
