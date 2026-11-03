class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int x = *max_element(nums.begin(), nums.end());
        for(int i : nums){
            if(i<x){
                ans += x - i;
            }
        }
        return ans;
    }
};