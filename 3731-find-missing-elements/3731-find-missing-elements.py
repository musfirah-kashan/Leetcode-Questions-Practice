class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        l1=[]
        for i in range(min(nums),max(nums)+1):
            if i not in nums:
                l1.append(i)
        return l1       