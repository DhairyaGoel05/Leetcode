class Solution:
    def uniqueOccurrences(self, arr: list[int]) -> bool:
        freq = {}

        for n in arr:
            freq[n] = freq.get(n, 0) + 1

        hashset = set()

        for count in freq.values():
            if count in hashset:
                return False

            hashset.add(count)

        return True   
        