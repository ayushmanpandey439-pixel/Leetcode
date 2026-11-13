class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int left = 0;
        int right = people.size() - 1;
        int ans = 0;
        while (left <= right) {
            int lightest = people[left];
            int heaviest = people[right];
            if (lightest + heaviest <= limit) {
                left++;
                right--;
            }
            else {
                right--;
            }
            ans++;
        }
        return ans;
    }
};