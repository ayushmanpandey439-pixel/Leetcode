class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0)
    return true;
        int first = 0;
int second = 0;

while (second < t.size()) {
    if (s.at(first) != t.at(second)) {
        second++;
    }
    else {
        first++;
        second++;
    }
    if (first == s.size())
        return true;
}
return false;   
    }
};
