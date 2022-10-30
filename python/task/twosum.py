public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Array.Sort(nums);
        int left = 0, right = nums.Length - 1;
        while(left < right)
        {
            if(nums[left] + nums[right] > target)
                right--;
            else if(nums[left] + nums[right] < target)
                left++;
            else
                return new int[] {left, right};
        }
        return null;
    }
}
