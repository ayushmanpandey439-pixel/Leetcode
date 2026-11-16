class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++) {
            int current = asteroids[i];
            bool alive = true;
            while (!st.empty() && st.top() > 0 && current < 0) {
                if (st.top() < -current) {
                    st.pop();
                }
                else if (st.top() == -current) {
                    st.pop();
                    alive = false;
                    break;
                }
                else {
                    alive = false;
                    break;
                }
            }
            if (alive) {
                st.push(current);
            }
        }
        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};