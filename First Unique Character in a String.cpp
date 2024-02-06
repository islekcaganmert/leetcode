class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> charIndex(26, -1);
        for (int i = 0; i < s.size(); ++i) {
            int index = s[i] - 'a';
            if (charIndex[index] == -1) {
                charIndex[index] = i;
            } else {
                charIndex[index] = -2;
            }
        }
        int result = INT_MAX;
        for (int idx : charIndex) {
            if (idx >= 0 && idx < result) {
                result = idx;
            }
        }
        return (result == INT_MAX) ? -1 : result;
    }
};
