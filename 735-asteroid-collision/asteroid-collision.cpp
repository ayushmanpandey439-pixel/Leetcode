class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st; 
        for (int current : asteroids) {
            bool alive = true;
            while (!st.empty() && st.back() > 0 && current < 0) {
                if (st.back() < -current) {
                    st.pop_back();
                } 
                else if (st.back() == -current) {
                    st.pop_back();
                    alive = false;
                    break;
                } 
                else {
                    alive = false;
                    break;
                }
            }

            if (alive) {
                st.push_back(current);
            }
        }
        return st;
    }
};