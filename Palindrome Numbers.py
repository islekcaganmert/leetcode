class Solution:
    def isPalindrome(self, x: int) -> bool:
        a = list(str(x))
        a.reverse()
        return str(x) == ''.join(a)
