class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        dic = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        i = 0
        ans = 0;
        previous = 0
        for i in range(len(s)):
            if dic[s[i]]>previous:
                ans = ans - 2*previous + dic[s[i]]
            else:
                ans += dic[s[i]]
            previous = dic[s[i]]
        return ans
