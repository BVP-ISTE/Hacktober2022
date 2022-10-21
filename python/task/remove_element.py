# Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.
# Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

# Example 1:
# Input: nums = [3,2,2,3], val = 3
# Output: 2, nums = [2,2,_,_]
# Explanation: Your function should return k = 2, with the first two elements of nums being 2.
# It does not matter what you leave beyond the returned k (hence they are underscores).

# Example 2:
# Input: nums = [0,1,2,2,3,0,4,2], val = 2
# Output: 5, nums = [0,1,4,0,3,_,_,_]
# Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
# Note that the five elements can be returned in any order.
# It does not matter what you leave beyond the returned k (hence they are underscores).
class Solution(object):
    def removeElement(self, nums, val):
        a = len(nums)
        j = a-1
        i = 0
        while i<j:
            while(nums[j]==val and j>=0):
                j-=1
            if nums[i] == val and j>=i:
                nums[i] = nums[j]
                j -=1
            i+=1
        while(len(nums)!=0 and nums[j]==val and j>=0 ):
                j-=1
        if(j==0):
            if nums[0] != val:
                return 1
            else: 
                return 0
        else:
            return j+1
            
