class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        max_count=0
        row=0
        for i in range(len(mat)):
            count=mat[i].count(1)
            if count>max_count:
                max_count=count
                row=i
        return [row,max_count]        

           
        