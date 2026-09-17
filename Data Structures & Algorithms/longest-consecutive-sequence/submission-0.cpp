class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> m(nums.begin(), nums.end());

        int longestStreak = 0;
        for (int num: m)
        {
            int currStreak = 0;
            if (m.find(num - 1) == m.end())
            {
                int currNum = num;
                currStreak++;

                while (m.find(currNum + 1) != m.end())
                {
                    currNum++;
                    currStreak++;
                }

                longestStreak = max(currStreak, longestStreak);
            }
        }

        return longestStreak;
    }
};
