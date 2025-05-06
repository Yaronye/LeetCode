class Solution: #fibbonacci; add the previous two elements to get current element (n-1) + (n-2)
    def climbStairs(self, n: int) -> int:
        if n == 1:      #base case
            return 1
        prev = 1
        preprev = 1
        total = 0

        for i in range(n-1):
            total = prev + preprev
            preprev = prev
            prev = total
        return total
