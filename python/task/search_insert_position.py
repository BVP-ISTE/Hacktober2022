# Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
# You must write an algorithm with O(log n) runtime complexity.

# Example 1:
# Input: nums = [1,3,5,6], target = 5
# Output: 2

# Example 2
# Input: nums = [1,3,5,6], target = 2
# Output: 1

# Example 3:
# Input: nums = [1,3,5,6], target = 7
# Output: 

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        # set start and end pointers
        start, end = 0, len(nums) - 1
        
        # binary search
        while True:
            mid = (start + end) // 2
            
            if nums[mid] == target:       # if equal to target, insert into current posstion
                return mid
            elif start == end:            # if not euqal to target but start is equal to end
                if nums[mid] > target:    # target is smaller, insert into current position
                    return mid
                else:                     # target is bigger, insert into next position
                    return mid + 1 
            elif nums[mid] > target:
                end = mid
            else:
                start = mid + 1
