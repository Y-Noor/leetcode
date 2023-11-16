from collections import defaultdict


class Solution:
    def groupAnagrams(self, strs):
        
        results = defaultdict(list)

        for str in strs:
            count = [0] * 26
            
            for cnt in str:
                count[ord(cnt) - ord("a")] += 1

            results[tuple(count)].append(str)
            

        return results.values()
            

strs = ["eat","tea","tan","ate","nat","bat"]
print(Solution().groupAnagrams(strs))
