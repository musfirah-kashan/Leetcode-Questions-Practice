class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        l1=list()
        for i in nums:
            if nums.count(i)==3:
                l1.append(i)
            else:
                return i