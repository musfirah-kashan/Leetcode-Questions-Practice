from itertools import permutations
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        # l1=[]
        # for i in permutations(nums):
        #     l1.append(list(i))
        # return l1    
        l1=[]
        def backtrack(i):
            if i==len(nums):
                l1.append(nums[:])
                return 
            for j in range(i,len(nums)):
                nums[i],nums[j]=nums[j],nums[i]
                backtrack(i+1)
                nums[i],nums[j]=nums[j],nums[i]
        backtrack(0)
        return l1       