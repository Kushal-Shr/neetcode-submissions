class Solution {
public:
    int hammingWeight(uint32_t n) {
        int setBits = 0;

        while (n > 0)
        {
            setBits += n % 2;
            n /= 2;
        }

        return setBits;
    }
};
