class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        words1=s1.split()
        words2=s2.split()
        result=[]
        for i in words1:
           if words1.count(i)==1 and i not in words2:
            result.append(i)
        for j in words2:
            if words2.count(j)==1 and j not in words1:
                result.append(j)
        return result        

        