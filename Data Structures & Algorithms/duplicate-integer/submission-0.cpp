class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() <= 1)
            return false;

        unordered_set<int> seen;

        for (auto item: nums)
        {
            if (seen.contains(item))
                return true;
            else
                seen.insert(item);
        }

        return false;
    }
};