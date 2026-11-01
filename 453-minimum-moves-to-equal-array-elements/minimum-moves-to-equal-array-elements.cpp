class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minVal = *min_element(nums.begin(), nums.end());
        int sum = 0;
        for(int i : nums){
            sum += i - minVal;
        }
        return sum;
    }
};