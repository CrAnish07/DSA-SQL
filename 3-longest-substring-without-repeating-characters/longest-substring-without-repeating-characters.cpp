class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> seen;
        int maxLength = 0;
        int left = 0;

        for(int right = 0; right < n; right++) {
            while(seen.find(s[right]) != seen.end()) {
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxLength = max(maxLength, (right-left+1));
        }
        return maxLength;
    }
};