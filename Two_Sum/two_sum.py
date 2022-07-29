class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        save = {}
        for i in range(len(nums)):
            num = target - nums[i]
            if(num in save):
                return [save[num], i]
            else:
                save[nums[i]] = i;
