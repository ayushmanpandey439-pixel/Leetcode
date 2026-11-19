class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i = 0; i<nums.size();i++){
            for(int j = 0; j< nums.size()-1; j++){
                if(nums.at(j)>nums.at(j+1)){
                    swap(nums.at(j), nums.at(j+1));
                }
            }
        }
    }
};