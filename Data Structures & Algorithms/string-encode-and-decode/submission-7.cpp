class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;

        for (string str: strs)
        {
            encoded_string.append(to_string(str.length()));
            encoded_string.push_back('#');
            encoded_string.append(str);
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        for (int i = 0; i < s.length();)
        {
            string str_len = "";

            while (s[i] != '#')
                str_len += s[i++];

            int len = stoi(str_len);

            i++;
            string str = "";

            int j = 0;
            while (j < len)
            {
                str.push_back(s[i++]);
                j++;
            }

            ans.push_back(str);
        }

        return ans;
    }
};
