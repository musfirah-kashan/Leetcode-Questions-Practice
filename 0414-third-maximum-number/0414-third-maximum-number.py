class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        s1=list(set(nums))
        s1.sort(reverse=True)
        if len(s1)>=3:
            return s1[2]
        else:
            return s1[0]    
        