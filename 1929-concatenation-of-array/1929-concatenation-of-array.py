class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        l1=[]
        for i in nums:
            l1.append(i)
        return (nums+l1)    