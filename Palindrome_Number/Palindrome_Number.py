class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if(x<0):
            return False
        else:
            reverse = 0
            x_cmp = x
            while(x_cmp):
                reverse = reverse*10 + x_cmp%10;
                x_cmp /= 10;
        return x == reverse
