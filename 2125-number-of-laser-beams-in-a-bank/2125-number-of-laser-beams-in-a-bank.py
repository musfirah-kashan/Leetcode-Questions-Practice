class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        total=list()
        for i in bank:
            count=i.count('1')
            if count>0:
                total.append(count)
        total_beams=0
        for i in range(1,len(total)):
            total_beams+=total[i-1]*total[i]
        return total_beams    


        