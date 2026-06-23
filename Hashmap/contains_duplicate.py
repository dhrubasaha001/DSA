class Solution(object):
    def containsDuplicate(self, nums):
        seen = {}
        for i in range(len(nums)):
            if nums[i] in seen:
                return True

            seen[nums[i]] = i

        return False
