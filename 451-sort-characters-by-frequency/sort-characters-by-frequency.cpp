class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> f;

        for(char i : s) {
            f[i]++;
        }
        vector<pair<char, int>> y;

        for(auto j : f) {
            y.push_back({j.first, j.second});
        }
        sort(y.begin(), y.end(), [](auto a, auto b) {
            return a.second > b.second;
        });
        
        string ans = "";

        for(auto n : y) {
            for(int i = 0; i < n.second; i++) {
                ans += n.first;
            }
        }

        return ans;
    }
};