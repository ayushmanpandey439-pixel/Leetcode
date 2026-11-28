class Solution {
public:
    bool recurse( string& s, int left, int right){
        if(left >= right){
            return true;
        }
        if(!isalnum(s[left])){
            return recurse(s, left+1, right);
        }
        if(!isalnum(s[right])){
            return(recurse(s, left, right-1));
        }
        if (tolower(s[left]) != tolower(s[right])){
            return false;
        }
        return recurse(s, left + 1, right - 1);
    }
    bool isPalindrome(string s) {
        return recurse(s, 0 , s.size());
    }
};