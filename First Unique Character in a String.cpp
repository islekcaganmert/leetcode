class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0; i < s.size(); ++i) {
            if (std::ranges::count(s, s[i]) == 1) {
                return i;
            }
        }
        return -1;
    }
};
