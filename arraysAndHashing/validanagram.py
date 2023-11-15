class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        '''if len(s) != len(t):
            return False

        s = [ord(x) for x in s]
        t = [ord(x) for x in t]
        
        if set(s) != set(t):
            return False

        s.sort()
        t.sort()

        for i in range(len(s)):
            if s[i] != t[i]:
                return False

        return True
        '''

        if len(s) != len(t):
            return False

        countS, countT = {}, {}

        for i in range(len(s)):
            countS[s[i]] = 1 + countS.get(s[i], 0)
            countT[t[i]] = 1 + countT.get(t[i], 0)

        for key in countS:
            if countS[key] != countT.get(key, 0):
                return False



        return True
    
s = "anagram"
t = "nagaram"
print(Solution().isAnagram(s, t))
                
