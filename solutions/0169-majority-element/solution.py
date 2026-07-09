class Solution(object):
    def majorityElement(self, nums):
        d = {}
        n = len(nums)
        limit = n//2
        for i in nums:
            if i in d:
                d[i] += 1
            else:
                d[i] = 1
            if d[i] > limit:
                return i
            
        
        
        
