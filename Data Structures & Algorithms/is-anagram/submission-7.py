# class Solution:
#     def isAnagram(self, s: str, t: str) -> bool:
#         if len(s)!=len(t):
#             return False
#         return sorted(s)==sorted(t)

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        countS,countT={},{}
        for i in range(len(s)):
            countS[s[i]]=1+countS.get(s[i],0) # 1 is the default count and get s[i] means if found then plus count else 0
            countT[t[i]]=1+countT.get(t[i],0) # # 1 is the default count and get t[i] means if found then plus count else 0
            # count.get() is dict key
        return countS==countT 
