class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        max_words=0
        for sentence in sentences:
            words=sentence.split()
            count_words=len(words)
            max_words=max(count_words,max_words)
        return max_words