class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
         int n = nums.size();
        int square_sum = 0;

        for (int i = 0; i < n; i++) {
            if (n % (i + 1) == 0) {
                square_sum += nums[i] * nums[i];
            }
        }

        return square_sum;
    }
};
