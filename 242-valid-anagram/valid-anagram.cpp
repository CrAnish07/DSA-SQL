class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        int hasharr[26] = {0};
        for(int i = 0; i < s.length(); i++) {
            hasharr[s[i]-'a']++;
            hasharr[t[i]-'a']--;
        }
        for(int i = 0; i < 26; i++) {
            if(hasharr[i] != 0) {
                return false;
            }
        }
        return true;
    }
};