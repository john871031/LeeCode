class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        length = len(nums)
        left = [1] * length
        for i in range(1, length):
            left[i] = left[i-1]*nums[i-1]
            print(left[i]) 

        right = 1

        for i in range(length-1, -1, -1):
            left[i] = left[i]*right
            right *= nums[i]
        return left
