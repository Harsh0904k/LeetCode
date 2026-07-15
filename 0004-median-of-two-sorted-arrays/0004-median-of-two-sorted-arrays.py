class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        A = []
        for x in nums1:
            A.append(x)
        for y in nums2:
            A.append(y)
        
        size = len(A)
        for x in range (size - 1):
             for i in range(size-1-x):
                if A[i] > A[i+1]:
                    A[i],A[i+1] =A[i+1],A[i]
        
        if size % 2 != 0:
            median_index = ((size + 1) / 2) - 1
            median = A[median_index]
        
        else:
              el1 = A[size/2 - 1]
              el2 = A[(size+1)/2]
              median = 0.5 * (el1 + el2)

        return median
     
   


        