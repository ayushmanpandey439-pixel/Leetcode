class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string a = "";
        int i = 0;
        int j = 0;
        while (i < word1.size() || j < word2.size()) {
            if(i < word1.size()){
                a.push_back(word1[i]);
                i++;
            }
            if(j<word2.size()){
                a.push_back(word2[j]);
                j++;
            }
        }
        return a;
    }
};