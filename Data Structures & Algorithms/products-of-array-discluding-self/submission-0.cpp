class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);

        bool hasZeros = false;
        int zeroIdx = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!nums[i])
            {
                hasZeros = true;
                zeroIdx = i;
            }
        }
            
        if (hasZeros)
        {
            for (int i = 0; i < zeroIdx; i++)
            {
                ans[i] = 0;
                ans[zeroIdx] *= nums[i];
            }
            for (int i = zeroIdx + 1; i < nums.size(); i++)
            {
                ans[i] = 0;
                ans[zeroIdx] *= nums[i];
            }
        }

        else
        {
            for (int i = 1; i < nums.size(); i++)
                ans[0] *= nums[i];

            for (int i = 1; i < nums.size(); i++)
            {
                ans[i] = ans[i - 1] / nums[i] * nums[i - 1];
            }
        }

        return ans;
    }
};
