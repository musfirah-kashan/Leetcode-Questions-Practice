class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        l1=sentence.split()
        for i in range(len(l1)):
            current_word=l1[i]
            next_word=l1[(i+1)%len(l1)]
            if current_word[-1]!=next_word[0]:
                return False
        return True
        