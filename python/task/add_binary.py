# Given two binary strings a and b, return their sum as a binary string.

# Example 1:
# Input: a = "11", b = "1"
# Output: "100"

# Example 2:
# Input: a = "1010", b = "1011"
# Output: "10101"

def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        res = []

        i, j = len(a) - 1, len(b) - 1;
        carry = 0

        while i >= 0 or j >= 0:
            total = carry
            if i >= 0: 
                total += int(a[i])
                i -= 1
            if j >= 0:
                total += int(b[j])
                j -= 1
            res.append(`total % 2`)
            carry = total / 2

        if carry:
            res.append(`carry`)

        return "".join(res)[::-1]
