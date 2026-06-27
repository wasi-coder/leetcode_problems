# Reverse Integer= reverse the digit
#if reversing causes the value to go out of 
# bounds of the 32 bit range then print 0 
class Solution:
    def reverse(self, x: int) -> int:
        max_num =2147483647

        sign =-1 if x<0 else 1
        x=abs(x)
        reversed_num=0
        while x!=0:
            last_digit_of_number=x%10
            x=x//10
            

            if((reversed_num>max_num//10)or( max_num//10==reversed_num and last_digit_of_number>7)):
                return 0
            
            reversed_num=(reversed_num*10)+last_digit_of_number

        return reversed_num*sign

sol=Solution()

test_cases =[123, -456, 120, 2147483647, 153423646]

for test in test_cases:
    result=sol.reverse(test)
    print (f"Input: {test} -> output: {result}")


