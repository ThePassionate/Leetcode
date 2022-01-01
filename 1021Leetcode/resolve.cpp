class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<int> mark;
        int left = 0;
        for (int i = 0; i < s.size(); i++) {
            if (left == 0) mark.push_back(i);
            switch(s[i]) {
                case '(' : left++; break;
                case ')' : left--; break;
            }
            if (left == 0) mark.push_back(i);
        }
        string ans = "";
        for (int i = 0, j = 0; i < s.size(); i++) {
            if (j < mark.size() && i == mark[j]) {
                j++;
                continue;
            }
            ans += s[i];
        }
        return ans;
    }
};
