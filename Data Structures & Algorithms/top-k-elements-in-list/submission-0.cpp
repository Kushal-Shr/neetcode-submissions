class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans(k, -1);

        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (const auto pair: freq)
            bucket[pair.second].push_back(pair.first);

        int count = 0;

        for (int i = bucket.size() - 1; i >= 0 && count < k; i--)
        {
            for (int num: bucket[i])
            {
                ans[count++] = num;

                if (count >= k)
                {
                    return ans;
                }
            }
        }

        return ans;
    }
};
