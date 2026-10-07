class Solution:
    def pivotArray(self, nums: list[int], pivot: int) -> list[int]:
        less=[]
        p=[]
        greater=[]
        for i in nums:
            if i < pivot:
                less.append(i)
            elif i>pivot:
                greater.append(i)
            else:
                p.append(i)        
        
        return less+ p+ greater