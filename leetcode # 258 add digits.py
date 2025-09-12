class Solution:
    def addDigits(self, num) -> int:
        if num == 0:
            return 0
        else:
            num = 1 + (num - 1) % 9
            return num


soap = Solution()
print(soap.addDigits(38))
print(soap.addDigits(18))
print(soap.addDigits(19))
print(soap.addDigits(2))
