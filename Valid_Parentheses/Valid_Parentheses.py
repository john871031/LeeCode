class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        for i in s:
            if i in '([{':
                stack.append(i)
            else:
                if not stack or \
                    (i==')' and stack[-1]!='(') or \
                    (i==']' and stack[-1]!='[') or \
                    (i=='}' and stack[-1]!='{'):
                    return False
                stack.pop()
        return not stack
