class Solution:
    def sortSentence(self, s: str) -> str:
        words=s.split()
        new=[]
        for word in words:
            for ch in word:
                if ch.isdigit():
                    new.append(ch+word.replace(ch,""))
        new.sort()
        for i in range(len(new)):
            new[i]=new[i][1:]
        return " ".join(new)                  
        