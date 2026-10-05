class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int score = 0;
        for (char c : s) {
            if (c == '(') {
                st.push(score);
                score = 0;
            }
            else {
                int inside;
                if (score == 0)
                    inside = 1;         
                else
                    inside = 2 * score; 
                score = st.top() + inside;
                st.pop();
            }
        }
        return score;
    }
};
