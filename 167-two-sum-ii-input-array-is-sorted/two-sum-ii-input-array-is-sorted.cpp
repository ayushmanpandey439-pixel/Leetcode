class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int high = numbers.size() - 1;
        while (true) {
            int current_sum = numbers[low] + numbers[high];
            if (current_sum == target) {
                return {low + 1, high + 1}; 
            } 
            else if (current_sum > target) {
                high--; 
            } 
            else {
                low++; 
            }
        }
    }
};