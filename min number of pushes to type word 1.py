import sys

input1 = "wasih"
input2 = "wasialsafa"
input3 = "srabuxyzwkljh"

class solution():
    def minpushes(self, word: str) -> int:
        ans = 0
        cycle = 1
        n = len(word)

        # q = n // 8
        # rem = n % 8
        i=0
        while i<n:
            turn =min (8,n-i)
            ans+=turn*cycle
            i+=turn
            cycle+=1
        

        # for i in range(0, n, 8):
        #     if(i == 0):
        #         ans = n
        #         cycle += 1
        #     elif(i > 0 and i + 8 <= n):
        #         ans = ans + 8 * cycle
        #         cycle += 1
        #     elif(i > 0 and i + 8 > n):
        #         ans = ans + rem * cycle
        #         cycle += 1
        
        
                

        
        return ans

sol = solution()

# print("Input 1:", input1)
# print("Output 1:", sol.minpushes(input1))
# print()

# print("Input 2:", input2)
# print("Output 2:", sol.minpushes(input2))
# print()

print("Input 3:", input3)
print("Output 3:", sol.minpushes(input3))