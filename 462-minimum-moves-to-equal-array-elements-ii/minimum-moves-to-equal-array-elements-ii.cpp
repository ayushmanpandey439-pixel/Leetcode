class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int median = nums[n / 2];
        
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > median) {
                count += (nums[i] - median);
            } 
            else if (nums[i] < median) {
                count += (median - nums[i]);
            }
        }
        return count;
    }
};