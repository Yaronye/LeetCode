class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1: #base case
            return nums[0]

        dp = [0] * n
        dp[0] = nums[0]
        dp[1] = max(nums[0], nums[1]) #max amount of money that can be stolen from the first i+1 houses

        for i in range(2, n):
            dp[i] = max(dp[i-1], nums[i] + dp[i-2])

        return dp[-1]
