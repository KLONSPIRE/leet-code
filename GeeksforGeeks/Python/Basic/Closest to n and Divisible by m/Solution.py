class Solution:
    def closestNumber(self, n, m):
        # code here 
        j = 0
        while j <= abs(m):
            if (n+j) % m == 0 or (n-j) % m == 0:
                break
            j += 1
                
        if(abs(n+j) % m == 0 and abs(n-j) % m == 0):
            if(abs(n+j) > abs(n-j)):
                return n+j
            else:
                return n - j;
        elif(abs(n+j) % m == 0):
            return n+j
        else:
            return n-j