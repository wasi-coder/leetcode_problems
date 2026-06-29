class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""

        prefix = strs[0]

        for i in range(1, len(strs)):
            col = 0
            while col < len(prefix) and col < len(strs[i]) and prefix[col] == strs[i][col]:
                col += 1
            prefix = prefix[:col]
            if not prefix:
                return ""

        return prefix