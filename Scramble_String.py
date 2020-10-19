class Solution:
    
    def __init__(self):
        self.dictt={}
        
    def rec(self,s1,s2):
        st=s1+" "+s2
    
        if st in self.dictt:
            return self.dictt[st]
        
        if len(s1)!=len(s2) or len(s1)==0:
            return False
        
        if s1==s2 or s1==s2[::-1]:
            self.dictt[st]=True
            return True
            
        for i in range (1,len(s1)):
            if sorted(s1[:i])==sorted(s2[:i]):
                if self.rec(s1[:i],s2[:i]) and self.rec(s1[i:],s2[i:]):
                    self.dictt[st]=True
                    return True
            elif sorted(s1[:i])==sorted(s2[-i:]):
                if self.rec(s1[:i],s2[-i:]) and self.rec(s1[i:],s2[:-i]):
                    self.dictt[st]=True
                    return True
        self.dictt[st]=False
        return False
            
        
    def isScramble(self, s1: str, s2: str) -> bool:
        
        if len(s1)!=len(s2) or (len(s1)==0):
            return False
        if s1==s2 or s1==s2[::-1]:
            return True
        if sorted(s1)!=sorted(s2):
            return False
        return self.rec(s1,s2)
