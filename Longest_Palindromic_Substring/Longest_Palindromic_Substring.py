class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        if len(s)<=1:
            return s
        longest = 1;
        longest_str = s[0]
        dp = [[False for i in range(len(s))] for j in range(len(s))]
        for i in range(len(s)):
            dp[i][i] = True
            for j in range(i):
                if s[i]==s[j] and (i-j<=2 or dp[j+1][i-1]):
                    dp[j][i] = True
                    if i-j+1>longest:
                        longest = i-j+1
                        longest_str = s[j:i+1]
        return longest_str
