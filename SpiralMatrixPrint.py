class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        
        if not matrix:
            return []
        T = 0
        B = len(matrix) -1
        L = 0
        R = len(matrix[0]) - 1
        dir = 0
        ans = []
        
        
        while T<= B and L <= R:
            
            if dir == 0:
                for i in range(L, R + 1):
                    ans.append(matrix[T][i])
                T += 1
            elif dir == 1:
                for i in range(T, B + 1):
                    #print(i)
                    ans.append(matrix[i][R])
                R -= 1
            elif dir == 2:
                for i in range(R, L-1, -1):
                    print(i)
                    ans.append(matrix[B][i])
                B-=1
            elif dir == 3:
                for i in range(B, T-1, -1):
                    ans.append(matrix[i][L])
                L += 1
                
            dir += 1
            dir %= 4
            print(ans)
        return ans