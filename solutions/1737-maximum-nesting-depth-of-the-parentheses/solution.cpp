class Solution {
public:
    int maxDepth(string s) {
    int depth = 0;
    int maximum = 0;
    int i = 0;
    while (i < s.size()){
        if(s.at(i) == '(') {
            depth++;
            if(depth > maximum){
                maximum = depth;
            }
        }else if(s.at(i) == ')'){
            depth--;
        }
        i++;
    }
    return maximum;
        
    }
};
