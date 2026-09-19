class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;

        for (string str: strs)
        {
            encoded_string.append(str);
            encoded_string.push_back('`');
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        for (int i = 0; i < s.length();)
        {
            string str = "";

            while (s[i] != '`')
            {
                str.push_back(s[i++]);
            }

            ans.push_back(str);
            i++;
        }

        return ans;
    }
};
