class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        t = int(str(x)[::-1])
        return x == t
