class Solution:
    def maxProduct(self, nums: List[int]) -> int:
       bravendil = nums[:]  
       nums.sort()
       smallest, second_smallest = nums[0], nums[1]
       largest, second_largest = nums[-1], nums[-2]
       best = float('-inf')
       for val in [100000, -100000]:
            best = max(best, val * second_largest * largest)
            best = max(best, smallest * val * largest)
            best = max(best, smallest * second_smallest * val)
       return best