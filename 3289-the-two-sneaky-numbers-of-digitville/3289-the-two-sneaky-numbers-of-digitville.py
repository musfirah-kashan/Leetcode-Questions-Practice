class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        l1=[]
        for i in nums:
            if nums.count(i)>1:
                if i not in l1:
                    l1.append(i)
        return l1