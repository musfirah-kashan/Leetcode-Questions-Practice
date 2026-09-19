class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        min_value=min(nums)
        max_value=max(nums)
        for i in nums:
            if i!=min_value and i!=max_value:
                return i
        return -1