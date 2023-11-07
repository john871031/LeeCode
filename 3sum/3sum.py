class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        ans = set()
        for i in range(len(nums)):
            if i==0 or (i>0 and nums[i]!=nums[i-1]):
                j = i+1
                k = len(nums)-1
                while(j<k):
                    tmp = nums[i] + nums[j] + nums[k]
                    if tmp==0:
                        ans.add((nums[i],nums[j],nums[k]))
                        while(j<k and nums[j]==nums[j+1]): j+=1
                        while(j<k and nums[k]==nums[k-1]): k-=1
                        j+=1
                        k-=1
                    elif tmp>0:
                        k -= 1
                    else:
                        j += 1
        return ans
