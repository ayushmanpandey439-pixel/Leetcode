class Solution(object):
    def merge(self, nums1, m, nums2, n):
        nums1[:] = nums1[:m]
        for i in nums2:
            nums1.append(i)
        nums1.sort()
        
