import string

class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()

        s2 = ""
        n = len(s)
        for i in s:
           if i.isalpha() or i.isdigit():
               s2 = s2 + i
        n = len(s2)
        for i in range(n):
            if s2[i] != s2[n-i-1]:
                return False
        return True

        
