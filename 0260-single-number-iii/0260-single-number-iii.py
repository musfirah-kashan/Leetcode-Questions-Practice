class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        l1=list()
        l2=list()
        for i in nums:
            if nums.count(i)==2:
                l1.append(i)
            else:
                l2.append(i)
        return l2            
        