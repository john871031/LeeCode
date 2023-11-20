class Solution(object):
    def eraseOverlapIntervals(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: int
        """
        l = len(intervals)
        last = 0
        ans = 0
        intervals.sort()
        for i in range(1,l):
            if intervals[i][0]<intervals[last][1]:
                ans += 1
                if intervals[i][1] <intervals[last][1]:
                    last = i
            else:
                last = i

        return ans
