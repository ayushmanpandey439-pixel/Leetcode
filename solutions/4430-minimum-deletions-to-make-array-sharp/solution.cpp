class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int ans = 0;
        for(int i = 1; i<nums.size(); i++) {
            if(nums.at(i)  == nums.at(i-1)){
                ans ++;
            }
        }
        return ans;
    }
};
