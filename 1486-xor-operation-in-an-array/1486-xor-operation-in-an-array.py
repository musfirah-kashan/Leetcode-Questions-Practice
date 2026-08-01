class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        nums=[]
        for i in range(0,n):
            nums.append(start+2*i)
        result = 0
        for num in nums:
            result ^= num              
        return result    

        