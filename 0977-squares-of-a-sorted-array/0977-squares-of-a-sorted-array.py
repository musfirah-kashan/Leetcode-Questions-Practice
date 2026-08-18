class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        l1=[]
        for i in nums:
            res=i**2
            l1.append(res)
            l1.sort()
        return  l1    
        