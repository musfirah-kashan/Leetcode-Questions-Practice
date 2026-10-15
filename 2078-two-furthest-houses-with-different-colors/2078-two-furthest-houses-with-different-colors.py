class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        diff=0
        max_diff=0
        for i in range(len(colors)):
            for j in range(i+1,len(colors)):
                if colors[i]!=colors[j]:
                    max_diff=max(max_diff,j-i)
        return max_diff            



        

        