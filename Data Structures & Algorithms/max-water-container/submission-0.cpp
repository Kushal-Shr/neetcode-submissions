class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = -1;
        int i = 0, j = heights.size() - 1;

        while (i < j)
        {
            int currA = (j - i) * min(heights[i], heights[j]);
            maxA = max(currA, maxA);

            if (heights[i] < heights[j]) i++;
            else j--;
        }

        return maxA;
    }
};
