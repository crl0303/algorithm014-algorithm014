class Solution {
    int hammingWeight(uint32_t)
    {
        int count = 0;
        while(n > 0) {
            ++count;
            n = n & (n-1);
        }
        return count;
    }
};
