class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a = s.split() # 斷字
        return len(a[-1]) # 最後1個字,求長度