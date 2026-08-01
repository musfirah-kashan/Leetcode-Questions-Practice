class Solution:
    def sumZero(self, n: int) -> List[int]:
        sum =0
        answer=[]
        for i in range(n):
            answer.append(i)
            sum =sum+i
        answer[0]-=sum
        return answer

result= Solution()
print(result.sumZero(5))



        