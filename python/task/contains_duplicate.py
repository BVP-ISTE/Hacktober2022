#Input an integer array nums and an integer k from the user.
#Return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
      numsSet =  set(nums)
      if len(nums) == len(numsSet):
         return False
      return True
