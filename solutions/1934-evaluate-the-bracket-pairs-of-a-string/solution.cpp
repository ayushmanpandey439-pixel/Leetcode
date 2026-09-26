class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> data;

        for (int i = 0; i < knowledge.size(); i++) {
            data[knowledge[i][0]] = knowledge[i][1];
        }

        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                int j = i + 1;

                while (s[j] != ')') {
                    j++;
                }

                string key = s.substr(i + 1, j - i - 1);

                if (data.find(key) != data.end()) {
                    ans += data[key];
                } else {
                    ans += '?';
                }

                i = j;
            }
            else {
                ans += s[i];
            }
        }

        return ans;
    }
};
