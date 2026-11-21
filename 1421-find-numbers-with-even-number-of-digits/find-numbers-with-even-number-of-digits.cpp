class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i:nums){
            int counter = 0;
            while(i != 0){
                i = i/10;
                counter ++;
            }
            if(counter %2 ==0){
                ans ++;
            }
        }
        return ans;
    }
};