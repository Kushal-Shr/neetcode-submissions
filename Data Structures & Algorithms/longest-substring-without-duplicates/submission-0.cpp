class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chM;

        int l = 0;
        int r = 0;

        int ans = 0;

        while (r < s.length())
        {
            while (chM.find(s[r]) != chM.end())
            {
                chM.erase(s[l]);
                l++;
            }
            chM.insert(s[r]);
            r++;
            
            ans = max(ans, r - l);
        }

        return ans;
    }
};
