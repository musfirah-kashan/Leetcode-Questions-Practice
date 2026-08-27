class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        ranking=sorted(set(arr))
        rankmap={}
        rank=1
        for value in ranking:
            rankmap[value]=rank
            rank+=1
        l1=[]    
        for i in arr:
            l1.append(rankmap[i])
        return l1    

            






        