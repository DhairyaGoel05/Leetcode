class Solution:
    def sortArrayByParityII(self, nums: list[int]) -> list[int]:
        e,o=0,1
        n=len(nums)
        while e<n and o<n:
            while e<n and nums[e]%2==0:
                e+=2
            while o<n and nums[o]%2!=0:
                o+=2
            if e<n and o<n:
                nums[e],nums[o]=nums[o],nums[e]
            e+=2
            o+=2
        return nums           
        