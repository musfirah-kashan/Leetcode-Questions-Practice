class Solution:
    def splitNum(self, num: int) -> int:
        digits=list(str(num))
        sorted_digits=sorted(digits)
        num1="".join( i for i in sorted_digits[::2])
        num2="".join(i for i in sorted_digits[1::2])
        return int(num1)+int(num2)


        