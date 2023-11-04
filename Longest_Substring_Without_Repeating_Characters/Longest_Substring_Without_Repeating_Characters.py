class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        res = {}
        ans = 0
        left = 0
        for i in range(len(s)):
            if s[i] in res:
                left = max(left, res[s[i]]+1)
            ans = max(ans, i-left+1)
            res[s[i]] = i
        return ans;
