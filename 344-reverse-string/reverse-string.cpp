class Solution {
public: 
    void recurs(vector<char>&s, int left, int right){
        if(left >= right) return;
        swap(s[left], s[right]);
        recurs(s, left+1, right-1);
    }
    void reverseString(vector<char>& s) {
        recurs(s, 0,s.size() - 1);
    }
};