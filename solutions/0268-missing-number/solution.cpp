class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<bool> present(n + 1, false);

        for (int x : nums) {
            present[x] = true;
        }

        for (int i = 0; i <= n; i++) {
            if (!present[i]) {
                return i;
            }
        }

        return -1;
    }
};
