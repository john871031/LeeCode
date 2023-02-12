class Solution(object):
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        count = 0
        i=0
        s_len = len(s)
        while(i<s_len):
            seg = False
            while(i<s_len and s[i]!=' '): 
                seg = True
                i += 1
            while(i<s_len and s[i]==' '):
                i += 1;
            if(seg): count += 1
        
        return count;
